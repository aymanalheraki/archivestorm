object FArcDesc: TFArcDesc
  Left = 0
  Top = 0
  BiDiMode = bdLeftToRight
  BorderStyle = bsDialog
  Caption = 'Docunent Description Show'
  ClientHeight = 316
  ClientWidth = 536
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  ParentBiDiMode = False
  Position = poMainFormCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label3: TLabel
    Left = 8
    Top = 60
    Width = 63
    Height = 16
    BiDiMode = bdRightToLeft
    Caption = 'Description'
    Color = clBtnFace
    Font.Charset = ARABIC_CHARSET
    Font.Color = clMaroon
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Pitch = fpFixed
    Font.Style = []
    ParentBiDiMode = False
    ParentColor = False
    ParentFont = False
  end
  object lblArcSubject: TLabel
    Left = 8
    Top = 30
    Width = 521
    Height = 21
    AutoSize = False
    Layout = tlCenter
  end
  object Label2: TLabel
    Left = 6
    Top = 8
    Width = 25
    Height = 16
    BiDiMode = bdRightToLeft
    Caption = 'Title'
    Color = clBtnFace
    Font.Charset = ARABIC_CHARSET
    Font.Color = clMaroon
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Pitch = fpFixed
    Font.Style = []
    ParentBiDiMode = False
    ParentColor = False
    ParentFont = False
  end
  object txtDesc: TRzMemo
    Left = 8
    Top = 80
    Width = 521
    Height = 228
    BiDiMode = bdLeftToRight
    Color = clInfoBk
    ParentBiDiMode = False
    ReadOnly = True
    ScrollBars = ssVertical
    TabOrder = 0
    ReadOnlyColorOnFocus = True
  end
end
