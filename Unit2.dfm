object OKBottomDlg: TOKBottomDlg
  Left = 427
  Top = 208
  BorderIcons = []
  BorderStyle = bsDialog
  Caption = #1042#1099#1073#1077#1088#1080#1090#1077' '#1087#1072#1087#1082#1091
  ClientHeight = 417
  ClientWidth = 249
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object OKBtn: TButton
    Left = 23
    Top = 388
    Width = 75
    Height = 25
    Caption = 'OK'
    Default = True
    ModalResult = 1
    TabOrder = 0
  end
  object CancelBtn: TButton
    Left = 151
    Top = 388
    Width = 75
    Height = 25
    Cancel = True
    Caption = 'Cancel'
    ModalResult = 2
    TabOrder = 1
  end
  object DriveComboBox1: TDriveComboBox
    Left = 16
    Top = 8
    Width = 217
    Height = 19
    DirList = DirectoryListBox1
    TabOrder = 2
  end
  object DirectoryListBox1: TDirectoryListBox
    Left = 16
    Top = 32
    Width = 217
    Height = 337
    ItemHeight = 16
    TabOrder = 3
  end
end
