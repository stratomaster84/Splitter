object Form1: TForm1
  Left = 253
  Top = 227
  Width = 578
  Height = 345
  BorderIcons = [biSystemMenu, biMinimize]
  Caption = #1056#1072#1079#1076#1077#1083#1080#1090#1077#1083#1100'/'#1089#1086#1077#1076#1080#1085#1080#1090#1077#1083#1100' '#1092#1072#1081#1083#1086#1074
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 569
    Height = 257
    ActivePage = TabSheet1
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabIndex = 0
    TabOrder = 0
    object TabSheet1: TTabSheet
      Caption = #1056#1072#1079#1076#1077#1083#1080#1090#1100
      object Label1: TLabel
        Left = 8
        Top = 16
        Width = 171
        Height = 13
        Caption = #1055#1091#1090#1100' '#1082' '#1088#1072#1079#1076#1077#1083#1103#1077#1084#1086#1084#1091' '#1092#1072#1081#1083#1091
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object Label2: TLabel
        Left = 8
        Top = 64
        Width = 383
        Height = 13
        Caption = #1055#1091#1090#1100' '#1082' '#1087#1072#1087#1082#1077' '#1076#1083#1103' '#1079#1072#1087#1080#1089#1080' '#1087#1072#1087#1082#1080' '#1089' '#1095#1072#1089#1090#1103#1084#1080' '#1088#1072#1079#1076#1077#1083#1103#1077#1084#1086#1075#1086' '#1092#1072#1081#1083#1072
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object Label3: TLabel
        Left = 8
        Top = 112
        Width = 314
        Height = 13
        Caption = #1052#1072#1082#1089#1080#1084#1072#1083#1100#1085#1099#1081' '#1088#1072#1079#1084#1077#1088' '#1095#1072#1089#1090#1077#1081' '#1088#1072#1079#1076#1077#1083#1103#1077#1084#1086#1075#1086' '#1092#1072#1081#1083#1072
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object Edit1: TEdit
        Left = 8
        Top = 32
        Width = 465
        Height = 21
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 0
      end
      object Button1: TButton
        Left = 480
        Top = 32
        Width = 75
        Height = 25
        Caption = #1053#1072#1081#1090#1080
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 1
        OnClick = Button1Click
      end
      object Edit2: TEdit
        Left = 8
        Top = 80
        Width = 465
        Height = 21
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 2
      end
      object Button2: TButton
        Left = 480
        Top = 80
        Width = 75
        Height = 25
        Caption = #1053#1072#1081#1090#1080
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 3
        OnClick = Button2Click
      end
      object ComboBox1: TComboBox
        Left = 8
        Top = 128
        Width = 177
        Height = 21
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ItemHeight = 13
        ItemIndex = 2
        ParentFont = False
        TabOrder = 4
        Text = 'FAT32 (4 '#1043#1073#1072#1081#1090')'
        OnChange = ComboBox1Change
        Items.Strings = (
          #1044#1080#1089#1082#1077#1090#1090#1072' (1.38 '#1052#1073#1072#1081#1090')'
          'CD '#1076#1080#1089#1082' (700 '#1052#1073#1072#1081#1090')'
          'FAT32 (4 '#1043#1073#1072#1081#1090')'
          'DVD '#1076#1080#1089#1082' (4,7 '#1043#1073#1072#1081#1090')'
          #1047#1072#1076#1072#1090#1100' '#1089#1074#1086#1081' '#1088#1072#1079#1084#1077#1088)
      end
      object Edit3: TEdit
        Left = 192
        Top = 128
        Width = 129
        Height = 21
        Enabled = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 5
        Text = '4'
      end
      object ComboBox2: TComboBox
        Left = 328
        Top = 128
        Width = 145
        Height = 21
        Enabled = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ItemHeight = 13
        ItemIndex = 2
        ParentFont = False
        TabOrder = 6
        Text = #1043#1073#1072#1081#1090
        Items.Strings = (
          #1050#1073#1072#1081#1090
          #1052#1073#1072#1081#1090
          #1043#1073#1072#1081#1090)
      end
      object Button3: TButton
        Left = 160
        Top = 168
        Width = 233
        Height = 41
        Caption = #1056#1072#1079#1076#1077#1083#1080#1090#1100
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -19
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 7
        OnClick = Button3Click
      end
    end
    object TabSheet2: TTabSheet
      Caption = #1057#1086#1077#1076#1080#1085#1080#1090#1100
      ImageIndex = 1
      object Label4: TLabel
        Left = 8
        Top = 16
        Width = 271
        Height = 13
        Caption = #1055#1091#1090#1100' '#1082' '#1087#1072#1087#1082#1077' '#1089' '#1095#1072#1089#1090#1103#1084#1080' '#1088#1072#1079#1076#1077#1083#1105#1085#1085#1086#1075#1086' '#1092#1072#1081#1083#1072
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object Label5: TLabel
        Left = 8
        Top = 64
        Width = 278
        Height = 13
        Caption = #1055#1091#1090#1100' '#1082' '#1087#1072#1087#1082#1077' '#1076#1083#1103' '#1079#1072#1087#1080#1089#1080' '#1088#1072#1079#1076#1077#1083#1105#1085#1085#1086#1075#1086' '#1092#1072#1081#1083#1072
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object Edit4: TEdit
        Left = 8
        Top = 32
        Width = 465
        Height = 21
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 0
      end
      object Button4: TButton
        Left = 480
        Top = 32
        Width = 75
        Height = 25
        Caption = #1053#1072#1081#1090#1080
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 1
        OnClick = Button4Click
      end
      object Edit5: TEdit
        Left = 8
        Top = 80
        Width = 465
        Height = 21
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 2
      end
      object Button5: TButton
        Left = 480
        Top = 80
        Width = 75
        Height = 25
        Caption = #1053#1072#1081#1090#1080
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 3
        OnClick = Button5Click
      end
      object Button6: TButton
        Left = 160
        Top = 168
        Width = 233
        Height = 41
        Caption = #1057#1086#1077#1076#1080#1085#1080#1090#1100
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -19
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 4
        OnClick = Button6Click
      end
    end
  end
  object ProgressBar1: TProgressBar
    Left = 8
    Top = 264
    Width = 553
    Height = 17
    Min = 0
    Max = 100
    TabOrder = 1
  end
  object ProgressBar2: TProgressBar
    Left = 8
    Top = 288
    Width = 553
    Height = 17
    Min = 0
    Max = 100
    TabOrder = 2
  end
  object OpenDialog1: TOpenDialog
    Left = 536
    Top = 216
  end
end
