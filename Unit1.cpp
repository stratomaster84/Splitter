//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include <FileCtrl.hpp>
#include <dir.h>
#define MAX_PARTS_COUNT 999
#define MAX_BUFFER_SIZE 67108864 // 64 Mb
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
const __int64 _part_sizes[4] = {1450000,735050752,4293918720,4697620480};
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBox1Change(TObject *Sender)
{
        Edit3->Enabled = false;
        ComboBox2->Enabled = false;
        switch(ComboBox1->ItemIndex){
                case 0:
                        Edit3->Text = "1.38";
                        ComboBox2->ItemIndex = 1;
                        break;
                case 1:
                        Edit3->Text = "700";
                        ComboBox2->ItemIndex = 1;
                        break;
                case 2:
                        Edit3->Text = "4";
                        ComboBox2->ItemIndex = 2;
                        break;
                case 3:
                        Edit3->Text = "4.7";
                        ComboBox2->ItemIndex = 2;
                        break;
                case 4:
                        Edit3->Enabled = true;
                        ComboBox2->Enabled = true;
                        break;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
        if (OpenDialog1->Execute())
                Edit1->Text = OpenDialog1->FileName;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
  AnsiString _dir ;
  if (SelectDirectory("","",_dir))
    Edit2->Text = _dir;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
        char _name[MAXFILE],_ext[MAXEXT];
        AnsiString __file_name;
        int _flags = fnsplit(Edit1->Text.c_str(),0,0,_name,_ext);
        if(_flags & FILENAME){
                __file_name = _name;
                if(_flags & EXTENSION)
                        __file_name += _ext;
        }
        else{
                Application->MessageBoxA("Ошибка в имени разделяемого файла!\nФайл НЕ БУДЕТ разделён!","ВНИМАНИЕ",NULL);
                return;
        }
        __int64 _pt_sz;
        if(ComboBox1->ItemIndex != 4)
                _pt_sz = _part_sizes[ComboBox1->ItemIndex];
        else{
                _pt_sz = StrToInt(Edit3->Text);
                _pt_sz <<= 10*(ComboBox2->ItemIndex+1);
                if(_pt_sz == 0)
                        _pt_sz = 0x7FFFFFFFFFFFFFFF;

        }
        int __file_hand = FileOpen(Edit1->Text,fmOpenRead);
        __int64 __file_len = FileSeek(__file_hand,(__int64)0,2);
        FileSeek(__file_hand,(__int64)0,0);
        if(__file_len <= _pt_sz){
                Application->MessageBoxA("Выбранный размер части файла больше самого файла!\nФайл НЕ БУДЕТ разделён!","ВНИМАНИЕ",NULL);
                FileClose(__file_hand);
                return;
        }
        __int64 __parts_count = __file_len/_pt_sz;
        __int64 __last_pt_sz = __file_len%_pt_sz;
        if(__last_pt_sz==0){
                __last_pt_sz = _pt_sz;
                __parts_count--;
        }

        if(__parts_count > MAX_PARTS_COUNT){
                Application->MessageBoxA("Количество частей разделяемого файла больше допустимого!\nФайл НЕ БУДЕТ разделён!","ВНИМАНИЕ",NULL);
                FileClose(__file_hand);
                return;
        }
        AnsiString __dir_name = Edit2->Text + "\\" + __file_name;
        if(!CreateDir(__dir_name)){
                Application->MessageBoxA("Невозможно создать папку с таким именем!\nФайл НЕ БУДЕТ разделён!","ВНИМАНИЕ",NULL);
                FileClose(__file_hand);
                return;
        }
        //  __file_hand
        //  __file_len
        //  __parts_count - количество ЦЕЛЫХ частей
        //  _pt_sz
        //  __last_pt_sz
        //  __file_name
        //  __dir_name
        AnsiString __part_name;
        int __part_hand;
        char __part_ext[4];
        int i,j;
        BYTE *_buffer;
        _buffer = new BYTE [MAX_BUFFER_SIZE];
        for(i = 0;i<=__parts_count;i++){
                ProgressBar1->Position = 100*i/(__parts_count+1);
                __part_ext[0] = 0x30 + i/100;
                __part_ext[1] = 0x30 + (i%100)/10;
                __part_ext[2] = 0x30 + i%10;
                __part_ext[3] = '\0';
                __part_name = "part_" + (AnsiString)__part_ext;

                __part_hand = FileCreate(__dir_name + "\\" + __part_name);

                int __buf_parts,__last_buf_size;
                if(i==__parts_count){
                        __buf_parts = __last_pt_sz/MAX_BUFFER_SIZE;
                        __last_buf_size = __last_pt_sz%MAX_BUFFER_SIZE;
                }
                else{
                        __buf_parts = _pt_sz/MAX_BUFFER_SIZE;
                        __last_buf_size = _pt_sz%MAX_BUFFER_SIZE;
                }
                if(__last_buf_size == 0){
                        __last_buf_size = MAX_BUFFER_SIZE;
                        __buf_parts--;
                }
                 if(__buf_parts>0)
                        for(j=0;j<__buf_parts;j++){
                                ProgressBar2->Position = 100*j/(__buf_parts+1);
                                FileRead(__file_hand,_buffer,MAX_BUFFER_SIZE);
                                FileWrite(__part_hand,_buffer,MAX_BUFFER_SIZE);
                        }
                FileRead(__file_hand,_buffer,__last_buf_size);
                FileWrite(__part_hand,_buffer,__last_buf_size);

                FileClose(__part_hand);
        }
        ProgressBar1->Position = 0;
        ProgressBar2->Position = 0;
        delete [] _buffer;
        Application->MessageBoxA("Файл успешно разделён!","ЗАВЕРШЕНО",NULL);
        FileClose(__file_hand);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
  AnsiString _dir ;
  if (SelectDirectory("","",_dir))
    Edit4->Text = _dir;


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
  AnsiString _dir ;
  if (SelectDirectory("","",_dir))
    Edit5->Text = _dir;


}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button6Click(TObject *Sender)
{
        char _name[MAXFILE],_ext[MAXEXT];
        AnsiString __file_name;
        int _flags = fnsplit(Edit4->Text.c_str(),0,0,_name,_ext);
        if(_flags & FILENAME){
                __file_name = _name;
                if(_flags & EXTENSION)
                        __file_name += _ext;
        }
        else{
                Application->MessageBoxA("Ошибка в имени разделённого файла!\nФайл НЕ БУДЕТ соединён!","ВНИМАНИЕ",NULL);
                return;
        }

        int __parts_count=1000;
        char __part_ext[4];
        __part_ext[3] = '\0';
        int i,j,k;
        for(i = 0x30;i<=0x39;i++){
                __part_ext[0] = i;
                for(j=0x30;j<=0x39;j++){
                        __part_ext[1] = j;
                        for(k=0x30;k<=0x39;k++){
                                __part_ext[2] = k;
                                if(!FileExists(Edit4->Text + "\\part_" + (AnsiString)__part_ext)){
                                        __parts_count = 100*(i-0x30)+10*(j-0x30)+(k-0x30);
                                        i=j=k=0x40;
                                }
                        }
                }
        }
        if(__parts_count == 0){
                Application->MessageBoxA("В папке нет ни одной части разделённого файла!\nФайл НЕ БУДЕТ соединён!","ВНИМАНИЕ",NULL);
                return;
        }
        __parts_count--;

        int __file_hand = FileCreate(Edit5->Text + "\\" + __file_name);
        if(__file_hand == -1){
                Application->MessageBoxA("Невозможно создать файл с таким именем!\nФайл НЕ БУДЕТ соединён!!","ВНИМАНИЕ",NULL);
                return;
        }

        // __parts_count
        AnsiString __part_name;
        int __part_hand;
        __int64 __part_size;
        BYTE *_buffer;
        _buffer = new BYTE [MAX_BUFFER_SIZE];
        for(i = 0;i<=__parts_count;i++){
                ProgressBar1->Position = 100*i/(__parts_count+1);
                __part_ext[0] = 0x30 + i/100;
                __part_ext[1] = 0x30 + (i%100)/10;
                __part_ext[2] = 0x30 + i%10;
                __part_ext[3] = '\0';
                __part_name = "part_" + (AnsiString)__part_ext;

                __part_hand = FileOpen(Edit4->Text + "\\" + __part_name,fmOpenRead);
                __part_size = FileSeek(__part_hand,(__int64)0,2);
                FileSeek(__part_hand,(__int64)0,0);

                int __buf_parts,__last_buf_size;

                __buf_parts = __part_size/MAX_BUFFER_SIZE;
                __last_buf_size = __part_size%MAX_BUFFER_SIZE;

                if(__last_buf_size == 0){
                        __last_buf_size = MAX_BUFFER_SIZE;
                        __buf_parts--;
                }
                 if(__buf_parts>0)
                        for(j=0;j<__buf_parts;j++){
                                ProgressBar2->Position = 100*j/(__buf_parts+1);
                                FileRead(__part_hand,_buffer,MAX_BUFFER_SIZE);
                                FileWrite(__file_hand,_buffer,MAX_BUFFER_SIZE);
                        }
                FileRead(__part_hand,_buffer,__last_buf_size);
                FileWrite(__file_hand,_buffer,__last_buf_size);

                FileClose(__part_hand);
        }

        ProgressBar1->Position = 0;
        ProgressBar2->Position = 0;
        delete [] _buffer;
        Application->MessageBoxA("Файл успешно соединён!","ЗАВЕРШЕНО",NULL);
        FileClose(__file_hand);

}
//---------------------------------------------------------------------------

