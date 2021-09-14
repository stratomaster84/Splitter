//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TPageControl *PageControl1;
        TTabSheet *TabSheet1;
        TTabSheet *TabSheet2;
        TLabel *Label1;
        TEdit *Edit1;
        TButton *Button1;
        TLabel *Label2;
        TEdit *Edit2;
        TButton *Button2;
        TLabel *Label3;
        TComboBox *ComboBox1;
        TEdit *Edit3;
        TComboBox *ComboBox2;
        TButton *Button3;
        TOpenDialog *OpenDialog1;
        TProgressBar *ProgressBar1;
        TProgressBar *ProgressBar2;
        TLabel *Label4;
        TEdit *Edit4;
        TButton *Button4;
        TLabel *Label5;
        TEdit *Edit5;
        TButton *Button5;
        TButton *Button6;
        void __fastcall ComboBox1Change(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
