object FArcMain: TFArcMain
  Left = 0
  Top = 0
  Align = alClient
  BiDiMode = bdLeftToRight
  BorderStyle = bsNone
  Caption = 'FArcMain'
  ClientHeight = 602
  ClientWidth = 1032
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  ParentBiDiMode = False
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object TopPanel: TPanel
    Left = 0
    Top = 0
    Width = 1032
    Height = 602
    Align = alClient
    BevelEdges = [beLeft]
    BevelKind = bkFlat
    BevelOuter = bvNone
    Ctl3D = False
    DoubleBuffered = False
    ParentCtl3D = False
    ParentDoubleBuffered = False
    TabOrder = 0
    object RzPanel5: TRzPanel
      Left = 0
      Top = 0
      Width = 1030
      Height = 602
      Align = alClient
      BorderOuter = fsNone
      Color = 15987699
      TabOrder = 0
      object RzPanel3: TRzPanel
        Left = 0
        Top = 0
        Width = 1030
        Height = 602
        Align = alClient
        BorderOuter = fsFlat
        Color = 15987699
        TabOrder = 0
        object RzPanel4: TRzPanel
          Left = 1
          Top = 438
          Width = 1028
          Height = 163
          Align = alBottom
          BiDiMode = bdRightToLeft
          BorderOuter = fsNone
          Color = 15987699
          ParentBiDiMode = False
          TabOrder = 0
          object ProcSG: TAdvStringGrid
            Left = 0
            Top = 0
            Width = 1028
            Height = 163
            Align = alClient
            BiDiMode = bdLeftToRight
            Color = clWhite
            ColCount = 14
            Ctl3D = True
            DrawingStyle = gdsClassic
            RowCount = 4
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlack
            Font.Height = -11
            Font.Name = 'Tahoma'
            Font.Style = []
            Options = [goVertLine, goHorzLine, goRowSelect]
            ParentBiDiMode = False
            ParentCtl3D = False
            ParentFont = False
            ParentShowHint = False
            ScrollBars = ssVertical
            ShowHint = True
            TabOrder = 0
            GridLineColor = 15987699
            GridFixedLineColor = 15987699
            OnGetAlignment = ProcSGGetAlignment
            OnGridHint = ProcSGGridHint
            OnRowChanging = ProcSGRowChanging
            OnClickCell = ProcSGClickCell
            HintShowLargeText = True
            HintShowSizing = True
            ActiveCellFont.Charset = DEFAULT_CHARSET
            ActiveCellFont.Color = clWindowText
            ActiveCellFont.Height = -11
            ActiveCellFont.Name = 'Tahoma'
            ActiveCellFont.Style = [fsBold]
            ActiveCellColor = 15387318
            Bands.Active = True
            Bands.PrimaryColor = 15592924
            ColumnSize.Stretch = True
            ColumnSize.StretchColumn = 8
            ControlLook.FixedGradientFrom = clWhite
            ControlLook.FixedGradientTo = clBtnFace
            ControlLook.FixedGradientHoverFrom = 13619409
            ControlLook.FixedGradientHoverTo = 12502728
            ControlLook.FixedGradientHoverMirrorFrom = 12502728
            ControlLook.FixedGradientHoverMirrorTo = 11254975
            ControlLook.FixedGradientHoverBorder = 12033927
            ControlLook.FixedGradientDownFrom = 8816520
            ControlLook.FixedGradientDownTo = 7568510
            ControlLook.FixedGradientDownMirrorFrom = 7568510
            ControlLook.FixedGradientDownMirrorTo = 6452086
            ControlLook.FixedGradientDownBorder = 14991773
            ControlLook.DropDownHeader.Font.Charset = DEFAULT_CHARSET
            ControlLook.DropDownHeader.Font.Color = clWindowText
            ControlLook.DropDownHeader.Font.Height = -11
            ControlLook.DropDownHeader.Font.Name = 'Tahoma'
            ControlLook.DropDownHeader.Font.Style = []
            ControlLook.DropDownHeader.Visible = True
            ControlLook.DropDownHeader.Buttons = <>
            ControlLook.DropDownFooter.Font.Charset = DEFAULT_CHARSET
            ControlLook.DropDownFooter.Font.Color = clWindowText
            ControlLook.DropDownFooter.Font.Height = -11
            ControlLook.DropDownFooter.Font.Name = 'Tahoma'
            ControlLook.DropDownFooter.Font.Style = []
            ControlLook.DropDownFooter.Visible = True
            ControlLook.DropDownFooter.Buttons = <>
            Filter = <>
            FilterDropDown.Font.Charset = DEFAULT_CHARSET
            FilterDropDown.Font.Color = clWindowText
            FilterDropDown.Font.Height = -11
            FilterDropDown.Font.Name = 'Tahoma'
            FilterDropDown.Font.Style = []
            FilterDropDown.TextChecked = 'Checked'
            FilterDropDown.TextUnChecked = 'Unchecked'
            FilterDropDownClear = '(All)'
            FilterEdit.TypeNames.Strings = (
              'Starts with'
              'Ends with'
              'Contains'
              'Not contains'
              'Equal'
              'Not equal'
              'Clear')
            FixedRowHeight = 22
            FixedFont.Charset = DEFAULT_CHARSET
            FixedFont.Color = clBlack
            FixedFont.Height = -11
            FixedFont.Name = 'Tahoma'
            FixedFont.Style = [fsBold]
            FloatFormat = '%.2f'
            GridImages = ImageList1
            HoverButtons.Buttons = <>
            HTMLSettings.ImageFolder = 'images'
            HTMLSettings.ImageBaseName = 'img'
            PrintSettings.DateFormat = 'dd/mm/yyyy'
            PrintSettings.Font.Charset = DEFAULT_CHARSET
            PrintSettings.Font.Color = clWindowText
            PrintSettings.Font.Height = -11
            PrintSettings.Font.Name = 'Tahoma'
            PrintSettings.Font.Style = []
            PrintSettings.FixedFont.Charset = DEFAULT_CHARSET
            PrintSettings.FixedFont.Color = clWindowText
            PrintSettings.FixedFont.Height = -11
            PrintSettings.FixedFont.Name = 'Tahoma'
            PrintSettings.FixedFont.Style = []
            PrintSettings.HeaderFont.Charset = DEFAULT_CHARSET
            PrintSettings.HeaderFont.Color = clWindowText
            PrintSettings.HeaderFont.Height = -11
            PrintSettings.HeaderFont.Name = 'Tahoma'
            PrintSettings.HeaderFont.Style = []
            PrintSettings.FooterFont.Charset = DEFAULT_CHARSET
            PrintSettings.FooterFont.Color = clWindowText
            PrintSettings.FooterFont.Height = -11
            PrintSettings.FooterFont.Name = 'Tahoma'
            PrintSettings.FooterFont.Style = []
            PrintSettings.PageNumSep = '/'
            ScrollBarAlways = saVert
            SearchFooter.ColorTo = clWhite
            SearchFooter.FindNextCaption = 'Find &next'
            SearchFooter.FindPrevCaption = 'Find &previous'
            SearchFooter.Font.Charset = DEFAULT_CHARSET
            SearchFooter.Font.Color = clWindowText
            SearchFooter.Font.Height = -11
            SearchFooter.Font.Name = 'Tahoma'
            SearchFooter.Font.Style = []
            SearchFooter.HighLightCaption = 'Highlight'
            SearchFooter.HintClose = 'Close'
            SearchFooter.HintFindNext = 'Find next occurrence'
            SearchFooter.HintFindPrev = 'Find previous occurrence'
            SearchFooter.HintHighlight = 'Highlight occurrences'
            SearchFooter.MatchCaseCaption = 'Match case'
            SearchFooter.ResultFormat = '(%d of %d)'
            SelectionRectangle = True
            ShowSelection = False
            ShowDesignHelper = False
            VAlignment = vtaCenter
            Version = '8.6.9.0'
            ColWidths = (
              64
              64
              785
              64
              64
              64
              64
              64
              64
              64
              64
              64
              64
              64)
            RowHeights = (
              22
              22
              22
              22)
          end
        end
        object servePanel: TPanel
          Left = 1
          Top = 398
          Width = 1028
          Height = 40
          Align = alBottom
          BevelKind = bkFlat
          BevelOuter = bvNone
          TabOrder = 1
          DesignSize = (
            1024
            36)
          object lblCount: TRzLabel
            Left = 924
            Top = 6
            Width = 74
            Height = 24
            Alignment = taCenter
            Anchors = [akTop, akRight]
            AutoSize = False
            BiDiMode = bdLeftToRight
            Caption = '0'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clBlack
            Font.Height = 14
            Font.Name = 'Tahoma'
            Font.Style = []
            ParentBiDiMode = False
            ParentColor = False
            ParentFont = False
            ParentShowHint = False
            ShowHint = False
            Transparent = True
            Layout = tlCenter
            BorderOuter = fsFlatRounded
            HighlightColor = 12615680
            ExplicitLeft = 940
          end
          object btnArcAdd: TAeroButton
            Left = 4
            Top = 4
            Width = 85
            Height = 28
            ImageIndex = 2
            Images = ImageList3
            Version = '1.0.0.2'
            Caption = 'Add new'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -11
            Font.Name = 'Tahoma'
            Font.Style = []
            ParentFont = False
            TabOrder = 0
            OnClick = btnArcAddClick
          end
          object btnArcPrint: TAeroButton
            Left = 95
            Top = 4
            Width = 63
            Height = 28
            ImageIndex = 1
            Images = ImageList3
            Version = '1.0.0.2'
            Caption = 'Print'
            TabOrder = 1
            OnClick = btnArcPrintClick
          end
        end
        object CurvyPanel2: TCurvyPanel
          AlignWithMargins = True
          Left = 4
          Top = 4
          Width = 1022
          Height = 85
          Align = alTop
          BorderColor = clNone
          Color = 14803425
          TabOrder = 2
          object Image2: TImage
            Left = 165
            Top = 10
            Width = 24
            Height = 24
            Cursor = crHandPoint
            AutoSize = True
            Center = True
            Picture.Data = {
              055449636F6E0000010001001818000001002000880900001600000028000000
              1800000030000000010020000000000000090000D60D0000D60D000000000000
              0000000000000000000000000000000000000000000000000000000000000000
              0000000000000000000000000000000000000000000000000000000000000000
              0000000000000000000000000000000000000000000000000000000000000000
              0000000000000000000000000000000000000000000000010000000400000008
              0000000B0000000E0000000F0000000D0000000A00000008000000080000000D
              000000130000001C00000021000000210000001D000000140000000900000001
              00000000000000000000000000000000000000060000000C0000001105050516
              3838381765656518757575196565651838383817000000190000001900000019
              0000001700000019003C604803588ED703598EE40249745E0000001000000006
              000000000000000000000000000000050000000A000000100000001541414117
              7D7D7D19BABABA1AE0E0E01CBABABA1A7D7D7D19414141170000001500000010
              0000000A00538934035B92F10C70B0FE1275B6FF065D94F303598E4D00000000
              000000000000000000000000000000050000000A0000000F0000001313131316
              404040175E5E5E186A6A6A185E5E5E184040401713131316000000130000000F
              0046763A03598FF10D73B2FF1D84C6FF5DA9DAFF3D92C8FF085D93E100000000
              0000000000000000000000000000000100000005000000090000000D00000010
              0000001200000014000000140000001400000012000000100000000D00477839
              03578DF10D72B2FF2388C8FF8FC4E6FFB0D7F0FF4998CAFE0A6094D200000000
              0000000000000000000000000000000000000000000000026B6D6B0DA5A8A66B
              ABAEADAAADB0AFE0ACAFADFBADB0AFE0ABAEADAAA5A8A66B165C853C03588FF1
              0D73B2FF298CCBFF96C8E8FFB1D8F1FF53A0D0FE065D93F100588D3100000000
              0000000000000000000000000000000000000000ACAFAD36AEB1AFE2B9BCBBF4
              C7CAC9FFD0D3D3FFD8DBDBFFD1D4D3FFC7CAC9FFB7BBBAF79BA8ACFD3080B1FF
              3090CDFF9BCBEAFFB2D9F1FF539FD0FE065D93F100578F320000000000000000
              00000000000000000000000000000000AFB1B076AFB2B1F4CFD2D1FFD2D5D5FF
              C1C4C2F5BDC0BEF1BEC0BEFBC3C6C4F1C9CBCAF5D4D7D7FFCED1D0FFA9B0B1FF
              A5BFCFFFB3DAF2FF52A0D0FE065C93F000578F32000000000000000000000000
              000000000000000000000000ACAFAD36B1B3B2F4E8E9E9FFC9CCCBF9B7B8B4F1
              C5B19C9ACAA98B81CEA47B75D1AF907FD0BFAA98CBCCCAF6C9CECEFFD7DADAFF
              ADB3B3FF65A2C9FE065C93F000578F3200000000000000000000000000000000
              0000000000000000ACAFAD08AFB2B0E2E5E6E5FFD0D2D1F9B9B5ACD2CEA47B78
              CF9D7265CD9D735BCD9E7257D19F7458CEA0725ED2A98270C7C7C4E0C9CECDFF
              CED1D0FF9CA8ACFD186393380000000000000000000000000000000000000000
              0000000000000000ACAFAD67C0C2C1F4E8E9E9FFB2B3B0F1CBA3797CD09E7161
              D3A3773AD5AB863DD6B18C3ED6AD883ECFA47D3BD19F7458D1A7826FC8C9C7F6
              D4D7D7FFB7BBBAF7ACAFAD670000000000000000000000000000000000000000
              0000000000000000AFB2B0A8D0D2D1FFC4C6C5F5C0AA949DCF9D726BD3A3773A
              DBB39340DDBFA144E1C0A345DDBC9E44DBB39340D4A9823BD09F705DCFBCA898
              C8CBC9F5C7CAC9FFAEB1AFA80000000000000000000000000000000000000000
              0000000000000000AFB2B0DFD7DADAFFB4B7B5F1C9A5828CD09E7161D6B18C3E
              E2C5A846E8D0B94CE8D3BF4CE3CBB34ADEC0A345DAB58C3ED1A27437CDAD8E7E
              C2C5C2F1D1D4D3FFAEB1B0DF0000000000000000000000000000000000000000
              0000000000000000ACAFADFBE0E3E3FFACAFAEFBCC9F7688D09F705DD8B49141
              E8D0B94CEDE0D153F0E0D453ECD8C54FE3C6AE48D8B49141D2A67939D0A37A71
              BCBEBCFBD8DBDBFFACAFADFB0000000000000000000000000000000000000000
              0000000000000000AFB2B0DFD7DADAFFB3B6B4F1C9A5828CD0A17262D8B49141
              E8D4C34DF6F1E859F6F1E858EFDCD051E3C7AF49DBB39340D19F7638CCAA8C7F
              BDC0BDF1D3D6D5FFAEB1B0DF0000000000000000000000000000000000000000
              0000000000000000AFB2B0A8CCCFCEFFC0C3C2F5BDA8929DD0A07373D4A9823B
              E3C6AE48F0E1D554F3E7DB54E8D4C34DE1C0A345D5AB863DCEA0725EC4B09A9A
              C7CAC9F5CED1D0FFAFB2B0A80000000000000000000000000000000000000000
              0000000000000000ACAFAD67BCBFBDF4D9DCDCFFAEAFACF1CCA07884CE9F7168
              D5AB863DDEC0A345E2C6AC47DDBC9E44D6AD883ED19F7458CDA27B76B7B8B4F1
              E9EAE9FFC0C2C1F4ACAFAD670000000000000000000000000000000000000000
              0000000000000000ACAFAD08AEB1AFE2D3D6D6FFC7CAC8F9B3B0A7D2CCA07884
              D09F7272D09F705DCD9F7638D0A17257CF9D7265CCA07A7AB9B5ACD2D0D2D1F9
              E3E4E4FFAFB2B0E2ACAFAD080000000000000000000000000000000000000000
              000000000000000000000000ACAFAD36AFB2B1F4DFE2E1FFC7CAC8F9AEAFACF1
              BDA8929DC9A5828CCC9F7688C9A5828CBFAA949DB2B3B0F1C9CCCBF9E9EBEAFF
              B0B3B2F4ACAFAD36000000000000000000000000000000000000000000000000
              00000000000000000000000000000000AEB1AF76AFB2B1F4D3D6D6FFD9DCDCFF
              C0C3C2F5B3B6B4F1ACAFAEFBB3B6B4F1C0C3C2F5D9DCDCFFD3D6D6FFB0B3B1F4
              AFB2B07600000000000000000000000000000000000000000000000000000000
              0000000000000000000000000000000000000000ACAFAD36AEB1AFE2BCBFBDF4
              CCCFCEFFD7DADAFFE0E3E3FFD7DADAFFCCCFCEFFBCBFBDF4AEB1AFE2ACAFAD36
              0000000000000000000000000000000000000000000000000000000000000000
              000000000000000000000000000000000000000000000000ACAFAD08ACAFAD67
              AFB2B0A8AFB2B0DFACAFADFBAFB2B0DFAFB2B0A8ACAFAD67ACAFAD0800000000
              0000000000000000000000000000000000000000000000000000000000000000
              0000000000000000000000000000000000000000000000000000000000000000
              0000000000000000000000000000000000000000000000000000000000000000
              0000000000000000000000000000000000000000000000000000000000000000
              00000000FFFFFF00F0000100E0000100C0000300C0000300C0000300F0000300
              F0000700E0000F00C0001F0080003F0080003F0080003F0080003F0080003F00
              80003F0080003F0080003F0080003F00C0007F00E000FF00F001FF00F803FF00
              FFFFFF00}
            OnClick = Image2Click
          end
          object Label1: TLabel
            Left = 204
            Top = 11
            Width = 51
            Height = 13
            BiDiMode = bdRightToLeft
            Caption = 'MainGroup'
            Color = clBtnFace
            Font.Charset = ARABIC_CHARSET
            Font.Color = clMaroon
            Font.Height = -11
            Font.Name = 'Tahoma'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentBiDiMode = False
            ParentColor = False
            ParentFont = False
          end
          object Label5: TLabel
            Left = 208
            Top = 33
            Width = 47
            Height = 13
            BiDiMode = bdRightToLeft
            Caption = 'SubGroup'
            Color = clBtnFace
            Font.Charset = ARABIC_CHARSET
            Font.Color = clMaroon
            Font.Height = -11
            Font.Name = 'Tahoma'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentBiDiMode = False
            ParentColor = False
            ParentFont = False
          end
          object Label4: TLabel
            Left = 410
            Top = 10
            Width = 24
            Height = 13
            BiDiMode = bdRightToLeft
            Caption = 'Type'
            Color = clBtnFace
            Font.Charset = ARABIC_CHARSET
            Font.Color = clMaroon
            Font.Height = -11
            Font.Name = 'Tahoma'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentBiDiMode = False
            ParentColor = False
            ParentFont = False
          end
          object Label3: TLabel
            Left = 751
            Top = 33
            Width = 34
            Height = 13
            HelpType = htKeyword
            HelpKeyword = 'Hqdt'
            BiDiMode = bdRightToLeft
            Caption = 'Add by'
            Color = clBtnFace
            Font.Charset = ARABIC_CHARSET
            Font.Color = clMaroon
            Font.Height = -11
            Font.Name = 'Tahoma'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentBiDiMode = False
            ParentColor = False
            ParentFont = False
          end
          object Label2: TLabel
            Left = 28
            Top = 40
            Width = 16
            Height = 13
            BiDiMode = bdRightToLeft
            Caption = 'Loc'
            Color = clBtnFace
            Font.Charset = ARABIC_CHARSET
            Font.Color = clMaroon
            Font.Height = -11
            Font.Name = 'Tahoma'
            Font.Pitch = fpFixed
            Font.Style = []
            ParentBiDiMode = False
            ParentColor = False
            ParentFont = False
          end
          object txtArcSearch: TAdvEdit
            Left = 23
            Top = 12
            Width = 138
            Height = 19
            EmptyTextStyle = []
            ShowError = True
            LabelPosition = lpRightCenter
            LabelFont.Charset = DEFAULT_CHARSET
            LabelFont.Color = clMaroon
            LabelFont.Height = -11
            LabelFont.Name = 'Tahoma'
            LabelFont.Style = []
            Lookup.Font.Charset = DEFAULT_CHARSET
            Lookup.Font.Color = clWindowText
            Lookup.Font.Height = -11
            Lookup.Font.Name = 'Arial'
            Lookup.Font.Style = []
            Lookup.Separator = ';'
            Color = clWindow
            Ctl3D = False
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -11
            Font.Name = 'Tahoma'
            Font.Style = []
            MaxLength = 25
            ParentCtl3D = False
            ParentFont = False
            TabOrder = 0
            Text = ''
            Visible = True
            OnKeyPress = txtArcSearchKeyPress
            Version = '4.0.1.3'
          end
          object chkActiveDate: TRzCheckBox
            Left = 563
            Top = 8
            Width = 23
            Height = 19
            Alignment = taLeftJustify
            State = cbUnchecked
            TabOrder = 2
            Transparent = True
            OnClick = chkActiveDateClick
          end
          object dateGB: TRzGroupBox
            Left = 592
            Top = 3
            Width = 153
            Height = 58
            BannerHeight = 1
            BiDiMode = bdLeftToRight
            BorderColor = clGray
            BorderInner = fsGroove
            BorderWidth = 1
            Color = 15987699
            Ctl3D = False
            ParentBiDiMode = False
            ParentCtl3D = False
            TabOrder = 3
            VisualStyle = vsGradient
            object dtpTo: TAdvDateTimePicker
              Left = 34
              Top = 32
              Width = 109
              Height = 22
              BiDiMode = bdLeftToRight
              Date = 41265.000000000000000000
              Format = 'yyyy-MM-dd'
              Time = 41265.000000000000000000
              Color = clSilver
              DoubleBuffered = True
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWindowText
              Font.Height = -12
              Font.Name = 'Tahoma'
              Font.Pitch = fpFixed
              Font.Style = []
              Font.Quality = fqClearType
              Kind = dkDate
              ParentBiDiMode = False
              ParentDoubleBuffered = False
              ParentFont = False
              TabOrder = 0
              OnKeyPress = dtpToKeyPress
              BorderStyle = bsSingle
              Ctl3D = True
              DateTime = 41265.000000000000000000
              Version = '1.3.6.2'
              LabelCaption = 'To'
              LabelPosition = lpLeftCenter
              LabelFont.Charset = DEFAULT_CHARSET
              LabelFont.Color = clMaroon
              LabelFont.Height = -11
              LabelFont.Name = 'Tahoma'
              LabelFont.Style = []
            end
            object dtpFrom: TAdvDateTimePicker
              Left = 34
              Top = 9
              Width = 109
              Height = 22
              BiDiMode = bdLeftToRight
              Date = 41265.000000000000000000
              Format = 'yyyy-MM-dd'
              Time = 41265.000000000000000000
              Color = clSilver
              DoubleBuffered = True
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWindowText
              Font.Height = -12
              Font.Name = 'Tahoma'
              Font.Pitch = fpFixed
              Font.Style = []
              Font.Quality = fqClearType
              Kind = dkDate
              ParentBiDiMode = False
              ParentDoubleBuffered = False
              ParentFont = False
              TabOrder = 1
              OnKeyPress = dtpFromKeyPress
              BorderStyle = bsSingle
              Ctl3D = True
              DateTime = 41265.000000000000000000
              Version = '1.3.6.2'
              LabelCaption = 'From'
              LabelPosition = lpLeftCenter
              LabelFont.Charset = DEFAULT_CHARSET
              LabelFont.Color = clMaroon
              LabelFont.Height = -11
              LabelFont.Name = 'Tahoma'
              LabelFont.Style = []
            end
          end
          object chkLate: TRzCheckBox
            Left = 438
            Top = 57
            Width = 106
            Height = 19
            Caption = 'Alarm Documents'
            Color = clRed
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clRed
            Font.Height = -11
            Font.Name = 'Tahoma'
            Font.Style = []
            ParentColor = False
            ParentFont = False
            State = cbUnchecked
            TabOrder = 4
            Transparent = True
            OnClick = chkLateClick
          end
          object txtDemands: TAdvEdit
            Left = 438
            Top = 31
            Width = 73
            Height = 19
            EditAlign = eaCenter
            EditType = etAlphaNumeric
            EmptyTextStyle = []
            ShowError = True
            ReturnIsTab = True
            LabelCaption = 'Need in'
            LabelPosition = lpLeftCenter
            LabelTransparent = True
            LabelFont.Charset = DEFAULT_CHARSET
            LabelFont.Color = clMaroon
            LabelFont.Height = -11
            LabelFont.Name = 'Tahoma'
            LabelFont.Style = []
            Lookup.Font.Charset = DEFAULT_CHARSET
            Lookup.Font.Color = clWindowText
            Lookup.Font.Height = -11
            Lookup.Font.Name = 'Arial'
            Lookup.Font.Style = []
            Lookup.Separator = ';'
            BiDiMode = bdLeftToRight
            ParentBiDiMode = False
            Color = clWindow
            Ctl3D = False
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -11
            Font.Name = 'Tahoma'
            Font.Style = []
            MaxLength = 4
            ParentCtl3D = False
            ParentFont = False
            TabOrder = 1
            Text = ''
            Visible = True
            OnKeyPress = txtArcSearchKeyPress
            Version = '4.0.1.3'
          end
          object cmbMainGroup: TRzComboBox
            Left = 261
            Top = 6
            Width = 127
            Height = 21
            Style = csDropDownList
            TabOrder = 5
            OnChange = cmbMainGroupChange
          end
          object cmbSubGroup: TRzComboBox
            Left = 261
            Top = 30
            Width = 127
            Height = 21
            Style = csDropDownList
            TabOrder = 6
            OnChange = cmbSubGroupChange
          end
          object cmbTypes: TRzComboBox
            Left = 438
            Top = 6
            Width = 102
            Height = 21
            Style = csDropDownList
            TabOrder = 7
            OnChange = cmbTypesChange
          end
          object cmbUsers: TRzComboBox
            Left = 791
            Top = 30
            Width = 168
            Height = 21
            Style = csDropDownList
            TabOrder = 8
            OnChange = cmbUsersChange
          end
          object AeroButton1: TAeroButton
            Left = 515
            Top = 30
            Width = 26
            Height = 21
            ImageIndex = 1
            Images = ImageList3
            ImagePos = ipRight
            Version = '1.0.0.2'
            TabOrder = 9
            OnClick = AeroButton1Click
          end
          object cmbDirection: TRzComboBox
            Left = 50
            Top = 37
            Width = 85
            Height = 21
            Style = csDropDownList
            TabOrder = 10
            OnChange = cmbTypesChange
            Items.Strings = (
              'All'
              'Archive'
              'Out'
              'In')
            Values.Strings = (
              '0'
              '1'
              '2'
              '3')
          end
        end
        object arcSG: TAdvStringGrid
          Left = 1
          Top = 92
          Width = 1028
          Height = 306
          Align = alClient
          BevelInner = bvNone
          BevelKind = bkFlat
          BevelOuter = bvNone
          BiDiMode = bdLeftToRight
          Color = clWhite
          ColCount = 16
          Ctl3D = False
          DoubleBuffered = True
          DrawingStyle = gdsClassic
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -11
          Font.Name = 'Tahoma'
          Font.Style = []
          Options = [goVertLine, goHorzLine, goRowSelect]
          ParentBiDiMode = False
          ParentCtl3D = False
          ParentDoubleBuffered = False
          ParentFont = False
          ParentShowHint = False
          ScrollBars = ssVertical
          ShowHint = True
          TabOrder = 3
          ActiveRowColor = 12615808
          GridLineColor = 15527152
          GridFixedLineColor = 13947601
          OnGetCellColor = arcSGGetCellColor
          OnGetCellCursor = arcSGGetCellCursor
          OnGetAlignment = arcSGGetAlignment
          OnGridHint = arcSGGridHint
          OnRowChanging = arcSGRowChanging
          OnClickCell = arcSGClickCell
          OnDblClickCell = arcSGDblClickCell
          HighlightTextColor = 15397601
          HintShowLargeText = True
          HintShowLargeTextPos = hpCursor
          HintShowSizing = True
          ActiveCellFont.Charset = DEFAULT_CHARSET
          ActiveCellFont.Color = clWindowText
          ActiveCellFont.Height = -11
          ActiveCellFont.Name = 'Tahoma'
          ActiveCellFont.Style = [fsBold]
          ActiveCellColor = 16575452
          ActiveCellColorTo = 16571329
          AutoThemeAdapt = True
          Bands.Active = True
          Bands.PrimaryColor = 15987689
          Bands.SecondaryColor = clCream
          BackGround.Display = bdFixed
          CellNode.NodeType = cn3D
          ColumnSize.Stretch = True
          ColumnSize.StretchColumn = 14
          ControlLook.FixedGradientMirrorFrom = 16049884
          ControlLook.FixedGradientMirrorTo = 16247261
          ControlLook.FixedGradientHoverFrom = 16710648
          ControlLook.FixedGradientHoverTo = 16446189
          ControlLook.FixedGradientHoverMirrorFrom = 16049367
          ControlLook.FixedGradientHoverMirrorTo = 15258305
          ControlLook.FixedGradientDownFrom = 15853789
          ControlLook.FixedGradientDownTo = 15852760
          ControlLook.FixedGradientDownMirrorFrom = 15522767
          ControlLook.FixedGradientDownMirrorTo = 15588559
          ControlLook.FixedGradientDownBorder = 14007466
          ControlLook.DropDownHeader.Font.Charset = DEFAULT_CHARSET
          ControlLook.DropDownHeader.Font.Color = clWindowText
          ControlLook.DropDownHeader.Font.Height = -11
          ControlLook.DropDownHeader.Font.Name = 'Tahoma'
          ControlLook.DropDownHeader.Font.Style = []
          ControlLook.DropDownHeader.Visible = True
          ControlLook.DropDownHeader.Buttons = <>
          ControlLook.DropDownFooter.Font.Charset = DEFAULT_CHARSET
          ControlLook.DropDownFooter.Font.Color = clWindowText
          ControlLook.DropDownFooter.Font.Height = -11
          ControlLook.DropDownFooter.Font.Name = 'Tahoma'
          ControlLook.DropDownFooter.Font.Style = []
          ControlLook.DropDownFooter.Visible = True
          ControlLook.DropDownFooter.Buttons = <>
          EnhTextSize = True
          Filter = <>
          FilterDropDown.Font.Charset = DEFAULT_CHARSET
          FilterDropDown.Font.Color = clWindowText
          FilterDropDown.Font.Height = -11
          FilterDropDown.Font.Name = 'Tahoma'
          FilterDropDown.Font.Style = []
          FilterDropDown.TextChecked = 'Checked'
          FilterDropDown.TextUnChecked = 'Unchecked'
          FilterDropDownMultiCol = False
          FilterDropDownClear = '(All)'
          FilterEdit.TypeNames.Strings = (
            'Starts with'
            'Ends with'
            'Contains'
            'Not contains'
            'Equal'
            'Not equal'
            'Clear')
          FixedColWidth = 91
          FixedRowHeight = 22
          FixedRowAlways = True
          FixedFont.Charset = DEFAULT_CHARSET
          FixedFont.Color = clBlack
          FixedFont.Height = -11
          FixedFont.Name = 'Tahoma'
          FixedFont.Style = [fsBold]
          Flat = True
          FloatFormat = '%.2f'
          FocusHelper.Enabled = True
          GridImages = ImageList2
          HoverButtons.Buttons = <>
          HTMLSettings.ImageFolder = 'images'
          HTMLSettings.ImageBaseName = 'img'
          Look = glWin7
          Lookup = True
          MouseActions.CheckAllCheck = True
          MouseActions.DisjunctRowSelect = True
          MouseActions.PreciseNodeClick = False
          MouseActions.RowSelect = True
          MouseActions.RowSelectPersistent = True
          MouseActions.SelectOnRightClick = True
          MouseActions.WheelIncrement = 3
          PrintSettings.DateFormat = 'dd/mm/yyyy'
          PrintSettings.Font.Charset = DEFAULT_CHARSET
          PrintSettings.Font.Color = clWindowText
          PrintSettings.Font.Height = -11
          PrintSettings.Font.Name = 'Tahoma'
          PrintSettings.Font.Style = []
          PrintSettings.FixedFont.Charset = DEFAULT_CHARSET
          PrintSettings.FixedFont.Color = clWindowText
          PrintSettings.FixedFont.Height = -11
          PrintSettings.FixedFont.Name = 'Tahoma'
          PrintSettings.FixedFont.Style = []
          PrintSettings.HeaderFont.Charset = DEFAULT_CHARSET
          PrintSettings.HeaderFont.Color = clWindowText
          PrintSettings.HeaderFont.Height = -11
          PrintSettings.HeaderFont.Name = 'Tahoma'
          PrintSettings.HeaderFont.Style = []
          PrintSettings.FooterFont.Charset = DEFAULT_CHARSET
          PrintSettings.FooterFont.Color = clWindowText
          PrintSettings.FooterFont.Height = -11
          PrintSettings.FooterFont.Name = 'Tahoma'
          PrintSettings.FooterFont.Style = []
          PrintSettings.PageNumSep = '/'
          ProgressAppearance.Steps = 1
          ScrollBarAlways = saVert
          ScrollColor = 4194432
          ScrollProportional = True
          ScrollSynch = True
          ScrollHints = shVertical
          SearchFooter.Color = 16645370
          SearchFooter.ColorTo = 16247261
          SearchFooter.FindNextCaption = 'Find &next'
          SearchFooter.FindPrevCaption = 'Find &previous'
          SearchFooter.Font.Charset = DEFAULT_CHARSET
          SearchFooter.Font.Color = clWindowText
          SearchFooter.Font.Height = -11
          SearchFooter.Font.Name = 'Tahoma'
          SearchFooter.Font.Style = []
          SearchFooter.HighLightCaption = 'Highlight'
          SearchFooter.HintClose = 'Close'
          SearchFooter.HintFindNext = 'Find next occurrence'
          SearchFooter.HintFindPrev = 'Find previous occurrence'
          SearchFooter.HintHighlight = 'Highlight occurrences'
          SearchFooter.MatchCaseCaption = 'Match case'
          SearchFooter.ResultFormat = '(%d of %d)'
          SelectionRectangle = True
          ShowSelection = False
          ShowModified.Enabled = True
          ShowDesignHelper = False
          SortSettings.HeaderColor = 16579058
          SortSettings.HeaderColorTo = 16579058
          SortSettings.HeaderMirrorColor = 16380385
          SortSettings.HeaderMirrorColorTo = 16182488
          SyncGrid.ScrollVertical = True
          UIStyle = tsWindows7
          VAlignment = vtaCenter
          Version = '8.6.9.0'
          WordWrap = False
          ColWidths = (
            91
            10
            91
            91
            91
            64
            64
            64
            192
            64
            64
            64
            8
            64
            64
            64)
          RowHeights = (
            22
            22
            22
            22
            22
            22
            22
            22
            22
            22)
        end
      end
    end
  end
  object ImageList1: TImageList
    Left = 144
    Top = 264
    Bitmap = {
      494C010111001400040010001000FFFFFFFFFF10FFFFFFFFFFFFFFFF424D3600
      0000000000003600000028000000400000005000000001002000000000000050
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000FFFFFF01FDFD
      FD03FBFBFB06F8F8F80AF8F8F80AFAFAFA07FCFCFC04FEFEFE02000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FEFEFE02F0F0F015E3E3E328D6D6
      D63B7A8C809A558B6BD0568F71D56F8B7FAFD0D0D042DCDCDC31EBEBEB1EF9F9
      F908000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000007F9D848832CC
      52FF3BD063FF44D473FF4DD883FF55DC94FF5EE0A4FF6C9182B0FFFFFF010000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000608E62B07EDC87FF28C7
      3FFF31CB50FF39CB5EFF41D16FFF4BD781FF54DB91FF5DDFA2FF61917DC40000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000E1E4E11E80DB7FFF7DDB81FF30AF
      3BF7F0F0F00F0000000000000000F7F7F70846CA77FE53DB8FFF5BDF9FFFE4E6
      E51C5F917AC4FBFBFB0400000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000005A9357C783D87FFF7CDA7BFFF8F8
      F807000000000000000000000000000000000000000000000000000000000000
      00005B956FC150D28CFFFCFCFC03000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000065B161FD87D384FF4AA846F70000
      0000000000000000000000000000598F55DA74CF70FF6DD66BFF6FD773FF53D2
      61FF30CB4EFF3DD166FF47CE79FFFCFCFC030000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000006AB465FF8FCE8BFF4D954AE90000
      00000000000000000000000000005A8358DA81C17DFF7BC977FF73D06FFF6ED6
      6CFF30C739FF25C63AFF32CC52FFAEBEB3570000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000517E4EDB94CA91FF75C271FF0000
      00000000000000000000000000007686758A6C826A996C866A996C8B6A996B90
      6998479243DC60D260FFADBFAE55000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000879686799AC796FF93C98FFF4A7F
      48C900000000000000000000000000000000388F3CD321C431FF29C841FF95A9
      99704E814BC5ACBDAC5300000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000004A7746E69AC696FF92C7
      8EFF5FAD5AFC568D54BA4C8D49C250C54BFF73D873FF72D876FF22A82EF60000
      0000E7E8E7180000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000004B7747E698C4
      94FF91C68DFF8AC886FF83CC7FFF7CD078FF75D571FF28A326F0000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000008C99
      8B74507C4BE169AF64FF6EBA69FF4A9446EF9CAD9C6300000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000FEFEFE01B8B8B8ECB9B9B9C39797976899999966A0A0A05FADADAD52C1C1
      C13ED3D3D32CE2E2E21DF2F2F20DFEFEFE0100000000FEFEFE01DDDDDD22D3D3
      D32CCFCFCF30CFCFCF30D4D4D42BDADADA25E1E1E11EF2F2F20DFDFDFD020000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000FDFDFD02FBFBFB06FCFCFC05FEFEFE01000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000527587FF668A
      9DFF7397AAFFC5C5C5FFC4C4C4FFAFB7BAFF486B7DFF5E8295FF56798CFF405E
      6EFF0000000000000000000000000000000000000000BAB8B6F6F2F1F1FFFFFF
      FFFFF0CBC0FFCFCEF8FFE5E4E2FFF9F8F8FFE3E2E2FFB8B7B7F88E8D8CCC8989
      8884CBCBCB34FCFCFC030000000000000000000000000000000000000000F5F5
      F510B6B6B67B656565E87F7F7FFD9C9C9CFF9C9C9CFE7C7C7CFB767676D2CBCB
      CB58FCFCFC050000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000005E879BFF7DA8
      BEFF93BED4FFD1D8DBFFBBBCBBFFBBBCBBFFA7AFB3FF3F6276FF52798CFF4061
      71FF0000000000000000000000000000000000000000D7D5D5FFECEBEBFFEFF3
      F3FFE48D6FFF817EEDFFD9D8D7FFE8E8E7FFB5B3B1FFD8D7D6FFFFFFFFFFFFFF
      FFFFE1E0DFFF7C7B7B9CF8F8F807000000000000000000000000000000008888
      88A4959595FFB3B3B3FFE1E1E1FFEEEEEEFFE6E6E6FFD2D2D2FF8D8D8DFFB8B8
      B8FEBFBFBF59000000000000000000000000E4E4E428D1D8D5FFD1D8D5FFD1D8
      D5FFBDC0BFB8EFEFEF18D1D9D5FFD1D9D5FFD1D9D5FFBDC1C0BC00000000D1D8
      D5FFD1D8D5FFD1D8D5FFB8BEBBEB000000000000000000000000608A9FFF81AD
      C4FF96C2D9FFAFD6EAFFC9E4F4FFB1B1B1FFB2B3B2FFA4AAAFFF28495DFF2D4D
      5EFF0000000000000000000000000000000000000000D1CFCEFFE8E7E7FFF5FA
      FCFFEB8B5AFF5D60FFFFCECCC0FFFFFFFFFF5D5B5BFFE4E3E3FFC9C7C6FFFFFF
      FFFFFCFCFCFFDFDEDDFFE0E0E01F0000000000000000000000008D8D8DE4AAAA
      AAFFF8F8F8FFF3F3F3FFC3B3A2FFAF8E6DFFAC8F73FFB8AFA7FFC6C6C6FFC3C3
      C3FFC0C0C0FFA4A4A48D0000000000000000E4E4E428E4E8E6FFE4E8E6FFE4E8
      E6FFCDD0CFADEFEFEF18E4E8E6FFE4E8E6FFE4E8E6FFCFD2D0B100000000E4E8
      E6FFE4E8E6FFE4E8E6FFC6C9C8E7000000000000000000000000608A9FFF82AE
      C5FF99C5DCFFAFD6EAFFCAE8F8FFC6CDD2FFA8A9A8FFD7D7D7FF9FA5A8FF2440
      51FFDFDFDF2100000000000000000000000000000000BAB8B6F6DFDEDEFFEFEF
      EEFFF8F8F9FFCECDCAFFFFFFFFFF999796FF5D5B5BFF626061FFFFFFFFFFD7D7
      D6FFFAF9F9FFDAD8D8FFEDEDED120000000000000000878787B4E6E6E6FFF8F8
      F8FFA57837FFC78017FFD6891BFFCB821BFFDD8E1EFFE4931EFFD98C1FFFA38C
      6DFFD3D3D3FFCECECEFFD2D2D23B00000000E4E4E428F3F1EEFFF3F1EEFFF3F1
      EEFFD4D4D4ADEFEFEF18F3F1EEFFF3F1EEFFF3F1EEFFD5D7D5B200000000F3F1
      EEFFF3F1EEFFF3F1EEFFD1D1CFE8000000000000000000000000608A9FFF80AC
      C3FF97C3DAFFAED5E9FFCCEAFAFFB3D9EDFFA1A7A8FFD5D5D5FF545454FF2A2A
      2AFF1F1F1FFF0B0B0BFF7B7B7B870000000000000000EEEDED30D6D4D3FFE6E5
      E5FFF6F5F5FFC8C7C6FFCFD2D2FFFFF2EBFF2B2A2BFFEAEAEAFFE7E8E8FFE3E2
      E1FFFAFBFAFFA2A1A0DA0000000000000000FBFBFB04C4C4C4FFF8F8F8FFAF79
      12FFCB9014FFDEA019FFBFAD85FFE7E7E7FFD7B45DFFF8B720FFF7B61FFFF1B2
      1EFFB18B3BFFEFEFEFFFC7C7C7FE0000000000000000D5D7D56CACADAC96D5D7
      D56CECECEC2B00000000D5D6D569AFAFAF8FD5D6D569E9E9E92F00000000D5D7
      D56CD5D7D56CD5D7D56CDCDCDC53000000000000000000000000608A9FFF81AD
      C4FF97C3DAFFAFD6EAFFCCEAFAFFB1D7EBFF94BFD7FF717373FF434343FF0F0F
      0FFF222222FF0B0B0BF49595956A2F2F2FD00000000000000000D1D0CF7DDCDA
      D9FFBEBDBBFFDFDEDEFFEEE8DCFFFAE8DAFFD28669FFFFE5D6FFC8C8C7FFBCBA
      B9FFE1DFDFFFE9E9E9160000000000000000A3A3A380F8F8F8FFA2751BFFC18C
      0FFFD49F14FFE9B319FFD2D1D1FFDDDDDDFFC1A756FFFFC81EFFFEC81EFFFBC5
      1DFFEFB91AFFC3B28DFFF8F8F8FFF9F9F9070000000000000000B7B7B7480000
      0000000000000000000000000000BFBFBF400000000000000000000000000000
      0000000000000000000000000000000000000000000000000000608A9FFF82AE
      C5FF99C5DCFFB1D8ECFFCCEAFAFFB0D6EAFF97C3DAFF656565FF454545FF2222
      22FF2B2B2BD4000000002D2D2DFB00000000000000000000000000000000E9E9
      E83DBEBDBCFFAEACA8FF046BAFFF127DCEFF0D7ECFFF2F79A4FFD2BFB3FFC5C4
      C2FFE9E9E917000000000000000000000000A9A9A9D2EFEDEAFFB37D0CFFC08A
      0EFFD39C12FFE7AF17FFE7CB79FFEEEEEEFFDADADAFFFBC21BFFFBC31BFFF8C0
      1BFFEDB518FFCE9A16FFF9F9F9FFDBDBDB3D0000000000000000D5D5D52AB8B8
      B847B9B9B946BABABA45BBBBBB448C8C8C73BCBCBC43BDBDBD42BEBEBE41BEBE
      BE41BFBFBF400000000000000000000000000000000000000000608A9FFF99BE
      D1FFC2DDEBFFC0DEEDFFB3D6E9FFBADAEBFFBFDCEBFF5F6263FF000000FF070A
      0CFF00000000747474F100000000000000000000000000000000000000000000
      0000E7E7E81D1681CFFF298FDEFF298FDDFF298FDDFF2C92E1FF1F6F9FFFE2E2
      E21D00000000000000000000000000000000D4D4D4E9CAB89FFFAF7809FFBA81
      0CFFCA8F0FFFDCA012FFEBAD15FFEAEAEAFFEBEBEBFFDEA71AFFF3B417FFEFB1
      16FFE2A513FFD09510FFF8F8F8FFD3D3D35C0000000000000000000000000000
      000000000000E0E0E01FE6E6E619ACACAC53E6E6E619E6E6E619E3E3E31C0000
      000000000000000000000000000000000000000000000000000000000000B0B0
      B0FF0000000000000000000000000000000000000000AAAAAAFA000000FF0000
      0000555555F8FDFDFD0200000000000000000000000000000000000000000000
      0000307FB0D6349AEAFF3399E8FF3399E8FF3399E8FF3399E8FF329AEAFF8E91
      927100000000000000000000000000000000D9D9D9EBC8B59BFFC59E61FFB175
      08FFBD7E0BFFCB8A0DFFD99510FFE3DCCEFFE9E9E9FFC29A4AFFE39D11FFDD98
      10FFD08E0EFFC1820BFFEDEAE7FFD3D3D3640000000000000000000000000000
      000000000000CF9F72FFCF9F72FFCF9F72FFCF9F72FFCF9F72FFBFA28BB50000
      000000000000000000000000000000000000000000000000000000000000ABAB
      ABFF0000000000000000000000000000000000000000A4A4A4FA070707FF1B1B
      1BF4000000000000000000000000000000000000000000000000000000000000
      00002F96E3FF3DA3F4FF3DA3F4FF3DA3F4FF3DA3F4FF3DA3F4FF41A7FAFF456B
      81BA00000000000000000000000000000000CDCDCDA6D8CFC3FFCCAC7FFFCCA9
      79FFB47614FFB97507FFC27B0CFFC6BFB3FFF2F2F1FFCD820BFFCD820BFFC67D
      0AFFBD7708FFB27007FFF0F0F0FFF7F7F7120000000000000000000000000000
      000000000000DEBD9EFFDEBD9EFFDEBD9EFFDEBD9EFFDEBD9EFFD0B5A0A80000
      000000000000000000000000000000000000000000000000000000000000AAAA
      AAFF0000000000000000000000000000000000000000949494FACACACAFF0000
      000000000000000000000000000000000000000000000000000000000000F9FA
      FB064AB2FFFF4BB3FFFF48ADFFFF47ADFEFF47ADFEFF47ADFEFF4AB0FFFF2F69
      8DD400000000000000000000000000000000F4F4F419EDEDEDFFD4BA99FFD3B6
      92FFD2B28CFFD0AB7FFFB7751BFFB66B05FFAB6508FFA96306FFB86C05FFB369
      05FFAD6705FF975B08FFE0E0E0FF000000000000000000000000000000000000
      000000000000EDDBCAFFEDDBCAFFEDDBCAFFEDDBCAFFEDDBCAFFD2BBA9A80000
      000000000000000000000000000000000000000000000000000000000000BCBC
      BCFFE6E6E64C00000000000000000000000000000000959595FFCCCCCCD30000
      000000000000000000000000000000000000000000000000000000000000FEFE
      FE01005688FF004270FF2585CAFF4CB2FEFF4CB2FFFF4BB1FFFF50B6FFFF4B73
      89B40000000000000000000000000000000000000000CFCFCFF9DACFC3FFDBC3
      AAFFD9BFA4FFD7BB9EFFD6B797FFD5B391FFFEFEFEFFFBFBFBFFB67B34FFB275
      29FFB17730FFD9D3CCFFE0E0E085000000000000000000000000000000000000
      000000000000F9EDE5FFF8ECE4FFF8ECE4FFF8ECE4FFF8ECE4FFD6C1B3A80000
      000000000000000000000000000000000000000000000000000000000000BFBF
      BFF8A5A5A5FFFFFFFF010000000000000000BFBFBF919D9D9DFFF1F1F13C0000
      0000000000000000000000000000000000000000000000000000000000000000
      0000005689FF006198FF08578CFF12659DFF359CE8FF40A8F4FF2680BEFFB9BB
      BC460000000000000000000000000000000000000000FDFDFD03E1E1E1FFDED2
      C6FFE1CDB9FFDEC9B4FFDDC6AEFFDBC2A8FFE5D4C4FFF1E8E0FFD3B495FFCFAF
      8EFFDAD1C9FFD6D6D6F000000000000000000000000000000000000000000000
      000000000000D6BFB0DDD6C0B1DDD6C0B1DDD6C0B1DDD6C0B1DDDBC9BD760000
      000000000000000000000000000000000000000000000000000000000000FFFF
      FF02C1C1C1FFA2A2A2FFA8A8A8FFA7A7A7FF999999FFC7C7C7CC000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000779AAF880367A0FF096AA3FF1D7FBFFF258CCFFF126AA4FF285B7AD70000
      0000000000000000000000000000000000000000000000000000FCFCFC07E1E1
      E1FFF0EDEBFFE2D3C5FFE3D2C1FFE2CFBCFFE0CCB8FFDDC8B2FFD6C5B3FFF2F1
      F1FFD6D6D6DC0000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000D5D5D585C0C0C0F0C3C3C3C3EBEBEB3600000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000648CA49B187AB7FF0F74B0FF076298FF567B92A9000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000E8E8E86FF2F2F2FFFDFDFDFFFDFDFDFFFDFDFDFFFCFCFCFFD9D9D9F0F6F6
      F626000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000D8D8D85A0000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000F0EFED1788806EB7978F7EA0000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000FDFDFD02F8F8F80700000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000ECECEC13BDBDBD429B9B9B64787878876969
      69968C8C8C73AEAEAE51D1D1D12E000000000000000000000000000000000000
      000000000000000000000000000096969675676764FBD1CFC6FFE0DDD3FF8786
      81FFECECEC13000000000000000000000000000000000000000000000000FAFA
      FA07E8E7E424A09179D8BBA381FFCBB394FFD2BDA2FF5D5033FFD8D8D8600000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000F6F6F6099595946C7E6B65E6A38680FD92919171FDFDFD020000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000010101FFBBBBBB51FEFEFE01000000000000
      000000000000ECECEC17000000FFF4F4F40E000000000000000000000000D6D6
      D62B5A5959D05B5A57FCE6E6E4FFD5DAC1FF6DA844FF7EA533FFEBE8DBFFCBC9
      C2FFB4B2ACFFB4B4B451000000000000000000000000DBD4C96DC1AE92F1D2BB
      9DFFD7C3A9FFD9C7AEFFD0B99CFFC8AD8BFFC5AA88FF655536FFC7C7C7FF5F59
      50FF000000000000000000000000000000000000000000000000000000000000
      0000BFBFBF407F6762F4EEC3B9FFE5B9AEFFB57A62FFE6BEB5FF726C6AABFCFC
      FC0300000000000000000000000000000000000000000000000000000000E4E4
      E4D2D6D6D6FE00000000000000008484848C000000FF1A1A1AE53E3E3EC14D4D
      4DB2292929D6050505FA010101FF0000000000000000585857DCB2B2ADFFE7E6
      DCFFAFD19DFF9E9D96FFA69760FFB07707FFC09325FFCAA73EFFE5DEC6FFCDCB
      C4FFCAC8C1FF92918CFF0000000000000000DDDDDD60585858FFDDCDB3FFD5BF
      A2FFD2BB9BFFCFB798FFCDB494FFCBB291FFC9AE8DFF6C593AFFC7C7C7FF5F59
      50FF9B9A99FFCCCAC8500000000000000000000000000000000000000000AFAF
      AF50967973FFEEC6BEFFB67D66FFB0633EFFB36640FFAD6542FFEEC4BAFF8A88
      877F00000000000000000000000000000000000000000000000000000000ECEC
      ECFFD2D2D2FFEFEFEF4700000000000000000F0F0FFF141414FF202020FF2020
      20FF202020FF000000FF7979799B0000000095959577AEC79FFF68890BFFC6AA
      40FFD7BE5AFF94938FFFA57E51FFA1671BFFB0770FFFB7810EFFDDCFAEFFD1CF
      C9FFCAC8C1FF95948FFF0000000000000000989898FF837861FFD9C5A8FFD7C2
      A4FFD5BFA0FFD3BC9DFFD1B99AFFCEB696FFCCB392FF745E3DFFC7C7C7FF5F59
      50FFCCCCCCFF5F5950FFD8D8D860000000000000000000000000E8E8E817967A
      74FFEEC8C0FFC08D79FFB46741FFB66943FFB96C46FFBB6F49FFB67859FFE1B9
      B0FFDCDCDC23000000000000000000000000000000000000000000000000E8E8
      E8FFCDCDCDFFE4E4E4BD0000000000000000494949EE333333FF303030FF3232
      32FF323232FF323232FF00000000000000007A7A7A9A9B6A2FFFAB700AFFB985
      12FFBE8E1FFF8E8D8AFF9F7445FFD8C2B3FFD0B59FFFCCAC8DFFD0BEA3FFDAD9
      D4FFD0CFC9FF969590FF0000000000000000DDDDDD60585858FFDDCAADFFDAC7
      A9FFD8C3A6FFD6C0A2FFD4BD9FFFD2BB9BFFCFB798FF7C6340FFC7C7C7FF5F59
      50FFCCCCCCFF5F5950FFBFA37FFF000000000000000000000000756C6AB3BC9E
      97FFF0D1CAFFB76A44FFBA6D47FF9A512EFFFEFEFEFFC2774FFFC57A52FFE0B8
      ACFF786A66CA000000000000000000000000000000000000000000000000E3E3
      E3FFC8C9C8FF00000000000000000000000000000000636363F94F4F4FFF4A4A
      4AFF5F5F5FFFB8B8B86B0000000000000000636363BBAE855DFFCCAE98FFCAA9
      83FFB17F36FF838381FF996D3CFFBE9C79FF9D7141FFC7B7A0FFEBEDE9FFE6E6
      E3FFE0DFDBFFACABA7FF0000000000000000989898FF837861FFE0CFB2FFDECC
      AFFFDBC9ABFFD9C5A8FFC9B48EFFB6A173FFD3BC9DFF846843FFC7C7C7FF5F59
      50FFCCCCCCFF5F5950FFC3A885FF0000000000000000F7F7F708B29791FFEACB
      C4FFC79D8CFFBD714AFFC0744DFFC37750FF954D2AFFC97E55FFCC8158FFC37E
      57FFE9C6BFFFE8E8E8170000000000000000000000000000000000000000DFDF
      DFFFC3C4C3FFE4E4E48600000000000000000000000000000000D3D3D3FFD5D5
      D5FFD0D0D0C4000000000000000000000000595959DBC4A586FFDECCBEFFB48B
      65FFAF8C65FF838382FFF2F1EBFFAFAFAAFFCFD0CCFFCBCBC7FFBABAB6FFECED
      EBFFEFEFEDFFCCCBC9FF000000000000000000000000C0AF8AFFE3D3B8FFD8C8
      A8FFEEE6D3FFFFFCF1FFFFFCF2FFBBA67BFFD6C0A2FF8B6C47FFC7C7C7FF5F59
      50FFCCCCCCFF5F5950FFC8AD8BFF0000000000000000D6D6D629D0B6B0FFF2DB
      D6FFB06E4CFFC37850FFC67B53FFC67C53FFFFFFFFFFCF865CFFD3895FFFD68D
      62FFF1D4CEFF979494740000000000000000000000000000000000000000DCDC
      DCFFBFBFBFFFEBEBEB5200000000000000000000000000000000D7D7D7FFC1C1
      C1FFB3B4B3CB000000000000000000000000636363F4D3CEC0FFE9E8E2FFD3D4
      D2FF5F5F5FFF82827EFFD8D7CEFFE3E1D8FFC8C6BEFF6A6A69FFE0E1DEFFC5C7
      C4FFADAEADFF616161FD000000000000000000000000C0AF8AFFE6D8BDFFFFFC
      F4FFE7E5DFFFDBD9D4FFF3F1ECFFC3AF87FFD9C4A7FF93714AFFC7C7C7FF5F59
      50FFCCCCCCFF5F5950FFCCB292FF00000000000000009F9C9C6BDFC6C0FFF2DF
      DBFFC17951FFCA7F57FFCD8359FFD0865CFFEFE9E6FFA56B50FFD99065FFDC94
      68FFDAB8AAFF867570D30000000000000000000000000000000000000000D8D8
      D8FFB3B3B3FFC2C2C2E400000000000000000000000000000000DBDBDBFFB6B7
      B6FFFFFFFF01000000000000000000000000C3C3C33F8B8B89FFA4A39EFFB6B6
      B5FF8FBE7DFF5DA030FF92AA39FFE6DFB6FFD1CFC7FFCAC8C1FF4D4D4CFFD5D5
      D52C00000000000000000000000000000000DDDDDD60585858FFEADCC3FFFFFD
      F9FFE7E6E3FFDBDAD8FFF3F2F0FFCDB995FFDCCAADFF96734BFFC7C7C7FF5F59
      50FFCCCCCCFF5F5950FFD0B898FF0000000000000000938F8E7EECD4CEFFF3E4
      E0FFCB8259FFD1875DFFD48B60FFEDE5E1FFD99165FFFAF8F8FFCE865CFFE29B
      6EFFD2A48AFFBDA49EFE0000000000000000000000000000000000000000D4D4
      D4FFD6D6D6FFD1D1D1C400000000000000000000000000000000DFDFDFFFBABB
      BAFFE2E2E29500000000000000000000000000000000000000009191917BCBCB
      C9FFA56A0DFFBA8613FFC59D32FFDCCB98FFD2D0C9FFCAC8C1FF8C8B87FF0000
      000000000000000000000000000000000000989898FF837861FFEDE0C9FFFFFF
      FEFFFFFFFFFFFFFFFFFFEEE6D7FFDFCFB2FFE0CEB2FF96734BFFC7C7C7FF5F59
      50FFCCCCCCFF5F5950FFD3BD9EFF0000000000000000938F8E7EF5DDD7FFF4E8
      E5FFD38A60FFD78E63FFDA9166FFD9C8C2FFD0BCB4FFFEFEFEFFC57E55FFE8A1
      73FFD39D7CFFCFBCB7FFFDFDFD02000000000000000000000000DCDCDC236363
      63FF4B4B4BFF7D7D7DE500000000000000000000000000000000E2E2E2FFBFBF
      BFFFF8F8F818000000000000000000000000000000000000000000000000D1D1
      CEFFCDB09BFFCCAA80FFCAA463FFD1B989FFD6D5CFFFCAC8C1FF8E8D88FF0000
      000000000000000000000000000000000000DDDDDD60585858FFF0E5CEFFEEE2
      CAFFECDFC7FFEADCC2FFE7D9BFFFEBE0CCFFF3ECE0FF96734BFFC7C7C7FF5F59
      50FFCCCCCCFF5F5950FFD7C2A4FF0000000000000000938F8E7EF6DED8FFF4EC
      EAFFD18C62FFDD9569FFE0986CFFE39B6EFFAF6B48FFB8734CFFEAA376FFECA6
      78FFD49A74FFD0C0BBFFFDFDFD02000000000000000097979768000000FF0101
      01FF000000FF000000FF000000FF000000000000000000000000E7E7E7FFC4C4
      C4FFF2F2F239000000000000000000000000000000000000000000000000D5D4
      CFFFF0E8E4FFDDC9BCFFB68E69FFD7CDBDFFDDDCD8FFD4D3CEFF94938EFF0000
      000000000000000000000000000000000000989898FF837760FFF3E9D3FFF2E9
      D3FFF5EDDFFFF7F1E7FFF0E5D3FFCAB394FFBDA88CFFD5CCC1FFC8C3BCFF5F59
      50FFCCCCCCFF5F5950FFDBC8ABFF0000000000000000B0ADAD5AF3E6E4FFF5E7
      E3FFF4EBE9FFC39C89FFE59E71FFE8A173FFC89791FFECA678FFEFA87AFFF0AA
      7BFFCD9773FFD0C3BFFFFDFDFD020000000000000000000000FF111111FF1B1B
      1BFF161616FF121212FF000000FFB7B7B7480000000000000000EBEBEBFFC9C9
      C9FFECECEC66000000000000000000000000000000000000000000000000E3E2
      DDFFC2B199FFE6E6E0FFEFF1F0FFE8E9E7FFEFF0EDFFE9E9E6FFB0AEABFF0000
      00000000000000000000000000000000000000000000C0AF8AFFE4D9C7FFBEA8
      8BFFCBBDAEFFEAEAEAFFDCD5CDFFC5B59FFF887761FF5F5950FF8E857BFFD7D6
      D3FFCFC8BFFF5F5950FFDFCEB1FF00000000000000000000000000000000D1D0
      D033E9C8C2FFF1D6D1FFD7C9C4FFEBA577FFEBD9D8FFF0AA7BFFD89D78FFEAE3
      E0FFF4E9E6FFBEB0ACFE0000000000000000D7D7D728000000FF373737FF3232
      32FF2D2D2DFF282828FF1E1E1EFF040404FB0000000000000000EEEEEEFFCECE
      CEFF000000000000000000000000000000000000000000000000000000005B5B
      5BC7C7C8C5FFCCCCC9FFA8A7A2FFACACA7FFE8EAE7FFDCDCDBFF9F9F9EFF0000
      000000000000000000000000000000000000000000000000000000000000B699
      75FF918069F7867E72FFABA39AFFBFB09DFFB4A089FF8D7B64FF6B6255FF5F59
      50FF92897AFFAD9A81FFA98B66FF000000000000000000000000000000000000
      0000F6F6F609C6A29BFEEFCCC5FFF0EDEBFFF6F4F4FFD4C9C5FFD5CDCAFFD7D6
      D62D00000000000000000000000000000000121212EDD6D6D62F000000000000
      00000000000000000000FFFFFF01000000FFFEFEFE0100000000FDFDFD03EBEB
      EB56000000000000000000000000000000000000000000000000000000000000
      0000FDFDFD025B5B5BC77A7B79FF4F4F4FFF6A6A6AAEC4C4C43E000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000CCCAC850726D65E0ABA495FFC4B299FFAD916DFFA98C6CD0D0C1
      AF70000000000000000000000000000000000000000000000000000000000000
      000000000000FDFDFD0293837FCCBEB1ADFFAD9C99F3968E8C99FEFEFE010000
      000000000000000000000000000000000000373737F4202020FF191919F62D2D
      2DD23E3E3EC12C2C2CE73B3B3BFF5C5C5CFFE6E6E61900000000000000000000
      000000000000000000000000000000000000FDFDFD02DCDCDC23CECECE31CECE
      CE31CECECE31CECECE31CECECE31CECECE31CECECE31CECECE31CECECE31CECE
      CE31CECECE31D1D1D12EF1F1F10E00000000FCFCFC03DDDDDD31DCDCDC32DCDC
      DC33DBDBDB34DBDBDB34DBDBDB34DBDBDB34DCDCDC33DCDCDC32DCDCDC31DDDD
      DD30DDDDDD2FDDDDDD2EE7E7E71F000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FDFDFD02DCDCDC237F7F7FFFEBEB
      EBFFEBEBEBFFEBEBEBFFEBEBEBFFEBEBEBFFEBEBEBFFEBEBEBFFEBEBEBFFEBEB
      EBFFDFDFDFFF9F9F9FA9F1F1F10E00000000EAEAEA1F50473FFF564E46FF5C54
      4CFF615950FF635B54FF645C54FF635A52FF5F574FFF5A5149FF544B43FF4D44
      3CFF524A42FF6B6561FF87837FB5000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000F6F6F609CBC9
      C23FA8A69F62000000000000000000000000FDFDFD02F2F2F20DDADADA258D8D
      8D828F8E8ECCC7C6C6F1DBDBDBFFC5C5C5FF989897FF696967FC575756E87070
      6FB6A3A3A360E9E9E916F7F7F708FEFEFE010000000000000000876A3CFFB38E
      4FFFB38D4FFFB28D4EFFB28C4DFFB18C4DFFB18B4CFFB18B4BFFB08A4BFFB08A
      4AFF96753FFF6F552CFF0000000000000000F1F1F1179D968EFFA49D96FFA9A3
      9CFFAEA8A1FFB1ABA5FFB2ACA6FFB1ABA5FFAFA9A3FFABA59EFFA69F99FFA099
      92FF97918BFF898683FFB0ADAAAD000000000000000000000000000000000000
      0000EFEFEF10C3C3C33C988E6E9E97833BE0AF9229FFB29731FFAF9229FFBAA3
      44FFC1AE54FFD9D9D9260000000000000000F7F7F708BEBEBE41D7D6D5FFB8B5
      B4FFC0BEBEFFC5C4C5FFBCBDBFFF9D9EA0FF737475FF5E5F5EFF696A68FF8B8B
      89FFBFBFBFFFA9A9A7FFE7E7E718FCFCFC030000000000000000886C3EFFB58F
      52FFB48F51FFB48E50FFB38E50FFB38D4FFFB28D4EFFB28C4DFFB18C4DFFB18B
      4CFF977641FF70562CFF0000000000000000F6F6F613988E83FF9A9085FF9D93
      88FF9F958BFFA1978DFFA2988EFFA1988DFFA0968CFF9E948AFF9C9187FF998F
      84FF968B80FF93877CFFBEBAB7A700000000000000000000000000000000AA8E
      2CF9AF9229FFC0AA55FFC6B87AFFCECAA5FFE5E0B6FFE3DFACFFDFDA9FFFDBD5
      92FFC5B55DFF8C8153BD0000000000000000FEFEFE01EBEBEB14818287FF5A54
      40FF766529FF8F7719FF998011FF8E720DFF78590EFF6B4D14FF6E5522FF6A5C
      36FF5B5954FFA8A9AEFF00000000000000000000000000000000896D40FFB691
      55FFB69154FFBA9B68FFFFFFFFFFD3C7B3FFDAD1C4FFFBFBFBFFB6935AFFB28D
      4EFF977742FF72572CFF0000000000000000FAFAFA099A8F85FF9F9C99FF9C92
      87FF9E9489FF9F958BFFA0968CFFA0968CFFA0968CFF9F958BFF9D9389FF9C91
      86FF998F85FFA39F9BFFCECCC993000000000000000000000000E8E1C270F4F2
      DEFFF3F1DAFF99A297FF7AA6BFFF7B9B9DFF717563FF868360FFDCD79AFFD6D0
      8DFFD0C97FFFA98E2CFF000000000000000000000000FDFCFC03846300FF5945
      09FF745E14FF8E7514FF987F10FF8E7310FF795A10FF6A4C11FF6C5115FF6650
      11FF5B4603FFA4851AEA000000000000000000000000000000008B6F42FFB893
      57FFB79356FFB79256FFB69155FFB69154FFB99A65FFB58F52FFF7F6F6FFB48E
      50FF987944FF74582CFF0000000000000000FDFDFD03A0968BFFA0968CFFA399
      90FFA59C92FFA79E94FFA89F95FF8D847AFF958C83FFA79E94FFA59C92FFA399
      8FFFA0968CFF9D9388FFD1D0CF79000000000000000000000000F9F8F110F0ED
      D1FFD9DFCDFF75AABEFF5A8498FFA57C21FFDAD5A5FF76560DFF6F725CFFC7C1
      81FFC9C277FFA28726FFFBFBFB040000000000000000FDFCFB04826304FF5A46
      0AFF755E14FF8F7614FF987F10FF8E730FFF79590FFF6B4C11FF6C5114FF6751
      12FF5B4705FFA5851AEC000000000000000000000000000000008B7044FFBA95
      5AFFD4C8B5FFCAB696FFB89357FFB9975EFFD4C8B5FFB69155FFDED7CCFFB590
      53FF9A7B46FF75592CFF0000000000000000FEFEFE01A69D94FFA79E95FFAAA2
      99FF595148FF4E463DFF484037FF484038FF484037FF463E36FF968E85FFABA2
      99FFA79E95FFA49A90FFD7D6D65C00000000000000000000000000000000BBC8
      B3EB70A4BAFF608DA0FFB7BEA6FFAB8731FFC3B16DFF926400FF999464FF6468
      4EFFB4AE68FFA59035FFD9D9D9260000000000000000FDFDFC03836405FF5844
      09FF735C13FF8D7414FF977E11FF8E720FFF785910FF6B4D12FF6B5014FF644F
      11FF5B4703FFA6881EE9000000000000000000000000000000008D7246FFBC97
      5DFFE1DCD4FFCBBA9CFFBA955AFFEAE5DDFFB99458FFB89358FFD0C2AAFFB792
      56FF9B7B48FF775A2DFF000000000000000000000000ADA59CFFAFA79EFFB2AB
      A2FF5E574FFF4F4841FF958E87FFBBB4ADFFBAB3ACFF5C554DFF4D463EFFAEA7
      9FFFAFA79EFFABA299FFE2E2E240000000000000000000000000BBD8E58F73A8
      BEFF6191A4FF95A59BFF97936EFF7A6C3EFFA09663FFA5A37AFF868A6AFF7676
      52FF8B854CFF88752BFFADA790770000000000000000FDFDFC03826304FF5945
      0AFF745D13FF8E7514FF987F11FF8E720FFF79590FFF6B4D12FF6B5014FF654F
      11FF5A4604FFA5861DEA000000000000000000000000000000008E7349FFBD99
      60FFC3A77AFFE1DCD3FFBC975DFFE5DDD1FFBA965BFFBA955AFFF8F8F7FFB994
      59FF9D7D4BFF7A5C2EFF000000000000000000000000B4ADA6F6B6AFA7FFBBB4
      ADFF918A84FF8D8781FF99938CFFC5BFB9FFC4BEB8FFC2BCB6FF57504AFF6760
      59FFB7B0A8FFB2AAA2FFE8E8E8320000000000000000A9D0E0BF75ACC2FF6395
      AAFF78908EF5CFCA97FFCBC691FFBBAB68FFAE9348FF9F7826FF9C7726FFDABC
      6EFF684905FF795301FFB0B0B04F0000000000000000FDFDFC03846506FF5743
      08FF715A13FF8C7313FF997E0FFF90720DFF7A590DFF6C4D11FF6A5014FF634E
      10FF5C4703FFA78921E7000000000000000000000000000000008F754AFFBF9B
      62FFBE9B62FFEAE7E2FFD4C7B2FFBE9B64FFBC985EFFE5E0DAFFD6CAB8FFBB96
      5BFF9E7F4DFF7C5E2FFF000000000000000000000000BBB7B1E7BEB8B1FFC3BD
      B7FFC8C3BDFFCCC7C1FFCECAC4FFD0CBC6FFCFCAC5FFCDC8C3FF938E88FF7E78
      72FFC0B9B3FFBAB3ABFFECECEC290000000093BFD5DF70A7BDFF679CB1FF7699
      AACF000000009D7111FFE8CE89FF956B09FF957010FF967719FF947316FFBA9B
      3EFF957417FFA2966CA2BFBFBF400000000000000000FDFDFC038A6300FF4743
      1BFF316774FF1E83AAFF1491C2FF0F87C7FF1071C1FF1861B1FF256094FF3B59
      57FF594502FFAA871AE80000000000000000000000000000000091764CFFC19D
      65FFC09C64FFC09C63FFD2C2AAFFFFFFFFFFFBFBFBFFC7B08BFFBD995FFFBC98
      5EFFA0804FFF7E6132FF000000000000000000000000C5C1BDD3C5C0BAFFCCC7
      C1FF68645FFFCECAC5FFD9D5D1FFDAD7D3FFD9D6D2FFD7D3CFFFD3CFCAFFCEC9
      C4FFC8C2BCFFC1BBB4FFEFEFEF1F00000000778B87FFB5C9CEFF6591A4EF0000
      0000F3EFE3209F8323FF9F8424FF9F8424FF9F8525FFA08525FFA08626FFA086
      26FFA08726FFCDCDCD32D1D1D12EFAFAFA0500000000FCFDFE03007CD5FF144F
      6EFF4F5E44FF7C7429FF907F1BFF8A7314FF765B16FF634F1FFF555232FF3554
      50FF025789FF239EE3E60000000000000000000000000000000091774EFFC29F
      67FFC29E66FFC19E66FFC19D65FFC09C64FFC09C63FFBF9B63FFBF9B62FFBE9A
      61FFA18252FF816436FF000000000000000000000000CECCC9BFCCC7C2FFD3CF
      CAFF77736FFF777470FFE2E0DDFFE4E2DFFFE4E1DEFF83807DFF73706CFFD6D2
      CEFFCFCBC6FFC8C3BDFFF3F3F31500000000D5E2EC70BDD3DEFF000000000000
      0000AA9533FFAA9633FFAB9634FFAB9734FFAB9835FFAC9835FFAC9936FFAC99
      36FFA7944BD5E2E2E21DE9E9E916F9F9F90600000000FDFDFC03886100FF4D3A
      07FF6D644DFFB1ADA5FFC9C7C3FFB5B4B1FF8B8A88FF63615AFF4D4838FF4E43
      1EFF574000FFA38A25E60000000000000000000000000000000089704AFF7F68
      44FF7F6844FF7E6844FF7E6843FF7E6743FF7E6742FF7E6642FF7D6641FF7D66
      40FF7C6540FF84683BFF000000000000000000000000D8D7D5AAD1CDC8FFD9D6
      D2FFE1DEDBFF807E7BFF82807EFF868482FF848280FF807F7CFF999794FFDEDB
      D7FFD6D2CDFFCEC9C4FFF8F8F80A00000000000000000000000000000000D6CC
      9A80B6A944FFB7AA44FFB7AA45FFB7AB45FFB8AB46FFB8AC46FFB8AC47FFB9AD
      47FFD5CEB65000000000000000000000000000000000FEFEFE02C6C6C8FFBBB9
      B8FFD9D8D7FFF8F7F7FFFDFDFDFFD9D9D9FFA1A1A0FF7A7A78FF7A7A78FF9191
      8FFFBDBEBFFFB7B5B0E100000000000000000000000000000000D3D3D3FFEBEB
      EBFFEBEBEBFFEBEBEBFFEBEBEBFFEBEBEBFFEBEBEBFFEBEBEBFFEBEBEBFFEBEB
      EBFFDFDFDFFFA29B8FFF000000000000000000000000E7E6E68AD4D0CCFFDDDA
      D6FFE5E3E0FFECEBE9FFE0DFDDFFBAB9B8FFC8C7C6FFF0EFEDFFEAE8E6FFE3E0
      DDFFDAD7D3FFD3CFCAFF0000000000000000000000000000000000000000C2B8
      5BFFC4BB5FFFC4BC60FFC5BC61FFC5BD62FFC6BD63FFC6BD63FFC6BE65FFC6BE
      66FFDDD8C64000000000000000000000000000000000FAFAFA0CC6C3C3FFC0BE
      BDFFBDBBBAFFBCB9B8FFCAC8C7FFDBDADAFF8C8C8BFFB7B7B7FFCFCFCFFFD3D3
      D4FFD3D3D4FFCFCFD1FF00000000000000000000000000000000F0F0F0FFD2D2
      D2FFD2D2D2FFD2D2D2FFD2D2D2FFD2D2D2FFD2D2D2FFD2D2D2FFD2D2D2FFD2D2
      D2FFD2D2D2FFACACACFF000000000000000000000000F9F8F86AA3A2A1FFDCD9
      D6FFE7E5E2FFEEEDEBFFF3F2F1FFF6F6F5FFF6F6F5FFF2F1F0FFECEBE9FFE5E3
      E0FFACABAAFFD6D2CDFF0000000000000000000000000000000000000000D2CC
      81FFD3CC83FFD3CC83FFD3CD85FFD4CD86FFD4CE87FFCABE6EFFCABE6FFFD4C9
      8CBFC8BA888F0000000000000000000000000000000000000000EFEFEF7AE2E2
      E2FEDBDBDBFFC6C6C5FFA6A7A4FFB7B7B5FFE1E1E1FFD3D3D1FFBEBEBAFFB6B6
      B3FFBBBBB8E5F4F4F42900000000000000000000000000000000CECECE96AFAF
      AFFFAFAFAFFFAFAFAFFFAFAFAFFFAFAFAFFFAFAFAFFFAFAFAFFFAFAFAFFFAFAF
      AFFFAFAFAFFF00000000000000000000000000000000FCFCFC48D4D0CCFFDDDA
      D7FFE6E4E1FFEDECEAFFF2F1F0FFF5F5F4FFF5F4F3FFF1F0EFFFEBEAE8FFE4E1
      DEFFDBD8D4FFD7D3CEFB00000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000F2F2
      F20DDEDEDE21D7D7D728DEDEDE21F2F2F20D0000000000000000000000000000
      000000000000000000000000000000000000C4C4C43BC3C3C33CC3C3C33CC3C3
      C33CC3C3C33CC3C3C33CC3C3C33CC3C3C33CC3C3C33CC3C3C33CC3C3C33CC3C3
      C33CC4C4C43BFFFFFF00FFFFFF00FFFFFF000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000F9F9F906FAFA
      FA05000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000EEEEEE11826255B8AC6346FFA73F
      14FFC47756FFC67A59FFC57757FFA63D12FFAB6446FF7F6357B4EFEFEF100000
      000000000000000000000000000000000000F9F9F9FFF4F4F4FFF4F4F4FFF4F4
      F4FFF4F4F4FFF4F4F4FFF4F4F4FFF4F4F4FFF4F4F4FFF4F4F4FFF4F4F4FFF4F4
      F4FFF4F4F4FFCACACAF6FFFFFF00FFFFFF0000000000000000008F9F9FFFDCF5
      F5FFDCF5F5FFDCF5F5FFDCF5F5FFDCF5F5FFDCF5F5FFDCF5F5FFDCF5F5FFDCF5
      F5FFDCF5F5FF8F9F9FFF00000000000000000000000000000000C6C6C6A6F7F7
      F7FFE7E7E7F4C3C3C3BFD9D9D9E9D0D0D0DEC2C2C2CFB7B7B7BFADADADADACAC
      AC98EAEAEA15B1B1B172BABABA59FAFAFA05BBB5B34DA13F14FFAA4A1EFFB859
      28FFE3B59BFFB05123FFE0B096FFB65625FFA8471BFFA23F14FFC8C5C33C0000
      000000000000000000000000000000000000FAFAFAFFF5F5F5FFF5F5F5FFF5F5
      F5FFF5F5F5FFF5F5F5FFF5F5F5FFF5F5F5FFF5F5F5FFF5F5F5FFF5F5F5FFF5F5
      F5FFF5F5F5FFFEFEFEFFCBCBCBF5FFFFFF000000000000000000DCF5F5FFDCF5
      F5FFDCF5F5FFDCF5F5FFDCF5F5FF4E4F4AFFEAE5D4FF494E4DFFDCF5F5FFDCF5
      F5FFDCF5F5FFDCF5F5FF000000000000000000000000FBFBFB04BDBDBDC6E5E5
      E5F30000000000000000DEDEDEEFEDEDEDFFEDEDEDFFEDEDEDFFEFEFEFFFCCCC
      CCA0F6F6F609D4D4D4C5FFFFFFFFF9F9F908E1DFDE21B04F21FFC56C3BFFDD8E
      59FFFCE9DAFFC66E3DFFFAE4D4FFD88650FFC16737FFAC4A1CFF7D4F3CE37552
      43D07F6F699EBEBEBE410000000000000000FAFAFAFFF6F6F6FFF6F6F6FFDDDD
      DDFFDDDDDDFFE3C0A3FFDDDDDDFFDDDDDDFFF6F6F6FFEEEEEEFFEEEEEEFFF6F6
      F6FFF6F6F6FFF6F6F6FFF6F6F6FFC1C1C13E0000000000000000DCF5F5FFDCF5
      F5FFDCF5F5FFDCF5F5FFDCF5F5FFDCF5F5FFEAE5D4FFEAE5D4FFDCF5F5FFDCF5
      F5FFDCF5F5FFDCF5F5FF000000000000000000000000C8C8C841E7E7E7FFEFEF
      EFFFC6C6C6DDB9B9B9D2EDEDEDFEEDEDEDFFEDEDEDFFEDEDEDFFF1F1F1FFB3B3
      B365C8C8C83EB6B6B663FFFFFFFFFEFEFE01FEFCFC03C06534FFDE905CFFF9C6
      9DFFF5DAC7FFE0915EFFF9E6D9FFF5B989FFD98955FFBA5C2BFFCB8B6DFFBC6D
      48FFA34116FFA8461DFF8F3A17F9F7F7F708FBFBFBFFF7F7F7FFF7F7F7FFDDDD
      DDFFDDDDDDFFF7F7F7FFC7722CFFDDDCDBFFF7F7F7FFDDDDDDFFDDDDDDFFF7F7
      F7FFFFBFDFFFF7F7F7FFF7F7F7FFC0C0C03F0000000000000000DCF5F5FFDCF5
      F5FFDCF5F5FF373A38FFDCF5F5FF646D6BFFEAE5D4FFEAE5D4FFDCF5F5FFDCF5
      F5FFDCF5F5FFDCF5F5FF000000000000000000000000B0B0B0A1E5E4E4FFE4E8
      ECFFF0EDEBFFF8F2EBFFFCF5ECFFF9F3EEFFEEEEEEFFEEEEEEFFEEEEEEFFF0F0
      F0FFF3F3F3FFF2F2F2FFFAFAFAFF0000000000000000CB7441FFEFAA75FFFFEA
      D6FFFFFFFFFFFAC69EFFFCDCC3FFFFDCBDFFEAA16DFFC46A38FFE5B79CFFDDA0
      7BFFC06534FFAD4D1FFFA64216FF00000000FBFBFBFFF8F8F8FFF8F8F8FFF8F8
      F8FFF8F8F8FFF8F8F8FFF4EDE8FFC7722CFFF6F2EFFFF8F8F8FF0000E0FF0000
      E0FFF8F8F8FFF8F8F8FFF8F8F8FFC0C0C03F0000000000000000DCF5F5FFDCF5
      F5FFDCF5F5FFEAE5D4FFEAE5D4FFEAE5D4FFEAE5D4FFEAE5D4FFB0C4C4FFDCF5
      F5FFDCF5F5FFDCF5F5FF000000000000000000000000CFCFCFF3EDEAE8FF4799
      F2FF0073FCFF0073FDFF0070FCFF68ABEFFFEEEEEEFFEEEEEEFFEEEEEEFFEEEE
      EEFFEEEEEEFFEEEEEEFFF5F5F5FF0000000000000000F7EFEA34F5AE76FFFFFF
      FFFF9FA4A9FF758C9DFFABAEB0FFFFFDF8FFEEA269FFD79065FFE8BCA0FFFADD
      C6FFDE8F5AFFC46A37FFAD4F25F300000000FCFCFCFFEBDBCBFFE0BE9FFFCA97
      69FFC8844AFFC97632FFC87531FFC7722CFFD3935FFFDDDDDDFFE6E6F7FF0000
      A9FFFFBFDFFFF9F9F9FFF9F9F9FFC0C0C03F0000000000000000DCF5F5FFDCF5
      F5FFDCF5F5FF8A9898FFEAE5D4FFEAE5D4FFB5B1A4FFEAE5D4FFEAE5D4FF3739
      37FFDCF5F5FFDCF5F5FF000000000000000000000000E9E7E5FFDEE4EBFFEFEE
      EDFFDDE6ECFF82B7F0FFFFFAEDFFEDECEBFFEEEEEEFFEEEEEEFFEEEEEEFFEEEE
      EEFFEEEEEEFFEEEEEEFFECECECF8000000000000000000000000000000009EAF
      BACD95B2C7FFA0BBCCFF91B0C5FFB6A99EFFFFFDF8FFF7D2B7FFF3CDB0FFFFFB
      F5FFF4B07BFFD5824EFFC88464B500000000FCFCFCFFFAFAFAFFFAFAFAFFDDDD
      DDFFDDDDDDFFFAFAFAFFCD8C57FFCF9768FFFAFAFAFFDDDDDDFFDDDDDDFFFAFA
      FAFFFFBFDFFFFAFAFAFFFAFAFAFFC0C0C03F0000000000000000DCF5F5FFDCF5
      F5FFDCF5F5FFDCF5F5FFDCF5F5FFDCF5F5FFDCF5F5FF75756DFFEAE5D4FFEAE5
      D4FFD8D3C3FFD9F1F1FF0000000000000000DFDFDF22DEDEDEFFEDEDEDFFFDF5
      EDFF0077FBFF0080FAFFBAD4EEFFE9EAEAFFEEEEEEFFEEEEEEFFEEEEEEFFEEEE
      EEFFEEEEEEFFEEEEEEFFDDDDDDEA0000000000000000000000000000000098B4
      C7FFB8CEDBFFC4D6E2FFB7CCDBFF89A9C0FFFFFFFFFFE0DEDCFFE0DBD7FFFFFF
      FFFFFDC18EFFDE8F5AFFF9F2EF1400000000FDFDFDFFFBFBFBFFFBFBFBFFFBFB
      FBFFFBFBFBFFEBD1BCFFDDAD85FFFBFBFBFFFBFBFBFFFBFBFBFFFBFBFBFFFBFB
      FBFFFBFBFBFFFBFBFBFFFBFBFBFFC0C0C03F0000000000000000DCF5F5FFDCF5
      F5FFDCF5F5FFDCF5F5FFDCF5F5FFDCF5F5FFDCF5F5FFDCF5F5FF51514CFFEAE5
      D4FFEAE5D4FFEAE5D4FF545453BC00000000B4B4B479D3D3D3FFEFEFEFFFEFEF
      EFFF9DC5F0FF3590F6FFFAF4EFFFECECECFFEFEFEFFFEFEFEFFFEFEFEFFFEFEF
      EFFFEFEFEFFFEFEFEFFFD1D1D1DE000000000000000000000000AAAAAB57A7C0
      D1FFCFDFEAFFE7F2FAFFCDDEE8FF9DB7C9FF707C85FF779DB6FF789DB6FF8896
      A0FFFFE7CFF3FAF0E9210000000000000000FDFDFDFFFCFCFCFFFCFCFCFFEEEE
      EEFFDDDDDDFFFCFCFCFFDDDDDDFFDDDDDDFFFCFCFCFFDDDDDDFFDDDDDDFFFCFC
      FCFFFFBFDFFFFCFCFCFFFCFCFCFFC0C0C03F00000000000000008F9F9FFFDCF5
      F5FFDCF5F5FFDCF5F5FFDCF5F5FFDCF5F5FFDCF5F5FFDCF5F5FFDCF5F5FF393B
      38FFEAE5D4FFEAE5D4FFEAE5D4FF00000000C4C4C4DAD6D6D6FFF2F2F2FFEEEE
      EEFFEEEEEEFFF1EFEEFFEEEEEEFFEEEEEEFFEFEFEFFFEFEFEFFFEFEFEFFFEFEF
      EFFFEFEFEFFFEEEEEEFFCBCBCBCE0000000000000000000000004D4D4DB40C0B
      0AFF84929DFF5C6165FF92A2AEFF040201FF53616BFFAEC6D5FFAFC7D6FF9BB7
      CAFFF2F5F716000000000000000000000000FEFEFEFFFDFDFDFFFDFDFDFFFDFD
      FDFFFDFDFDFFFDFDFDFFFDFDFDFFFDFDFDFFFDFDFDFFFDFDFDFFFDFDFDFFFDFD
      FDFFFDFDFDFFFDFDFDFFFCFCFCFFC0C0C03F0000000000000000000000004F56
      56FFC0D0D0FFC0D0D0FFC0D0D0FFC0D0D0FF4F5656FF00000000000000000000
      0000373735E0EAE5D4FF43433EE400000000E0E0E0FEEBEBEBFFDEDEDEFFDADA
      DAFFDDDDDDFFDCDCDCFFE2E2E2FFE3E3E3FFE4E4E4FFE6E6E6FFE7E7E7FFE9E9
      E9FFEEEEEEFFDEDEDEC4BEBEBEB00000000000000000000000009191916F1717
      17FF252524FF252525FF222222FF141414FF8E9FAAFFD0E0EBFFD2E1EBFFB7CC
      DAFF97B2C4DA000000000000000000000000008300FF008600FF008C01FF0592
      0BFF0B9815FF109E1EFF13A225FF16A529FF16A529FF13A225FF109E1EFF0B98
      15FF05920BFF008D01FF008600FF406C40BF0000000000000000000000006969
      6996C0D0D0FFC0D0D0FFC0D0D0FFC0D0D0FF6969699600000000000000000000
      0000000000000000000000000000000000000000000000000000E7E7E733C1C1
      C190DCDCDCEDEBEBEBFFEBEBEBFFE3E3E3FFE2E2E2FFE3E3E3FFE3E3E3FFE3E3
      E3FFCECECEDF0000000000000000000000000000000000000000000000002929
      29FF505050FF565656FF4B4B4BFF1A1919FFADC1CEFFD9E7F1FFDAE8F2FFAEC1
      CEFF080A0CFF000000000000000000000000008600FF008A00FF049109FF0B98
      15FF11A021FF18A72DFF1DAD37FF20B13DFF20B13DFF1DAD37FFB4E2BBFF9FD9
      A6FFB0DDB3FF9AD39CFF008A00FF406C40BF0000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000F1F1F119C0C0C068D4D4D4CEE9E9E9FFF2F2F2FFE9E9
      E9FFB5B5B58B0000000000000000000000000000000000000000000000000000
      00009D9D9D708B8B8BBBB0B0B0570A0A0AFF222323FF393837FF393837FF2222
      23FF0C0C0CFF000000000000000000000000008700FF018D02FF07940EFF0F9D
      1DFF17A62BFF1FAF3AFF27B849FF2CBE53FF2CBE53FF27B849FF35B74DFF2AAD
      3CFF27A733FF1B9D22FF018D02FF406C40BF0000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000FDFDFD02E3E3
      E345E8E8E81B0000000000000000000000000000000000000000000000000000
      0000000000000000000000000000333333D8313131FF404040FF3F3F3FFF2E2E
      2EFF2E2E2EDE000000000000000000000000008800FF006000FF929292FF9292
      92FF19A930FF23B442FF2DBF55FF36CA66FF36CA66FF2DBF55FF23B442FF0764
      09FF929292FF8E908EFF028E04FF416C41BE0000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000004D4D4DDB7A7A7AFF797979FF4B4B
      4BDF00000000000000000000000000000000497349B6477347B8EEEEEEFFEEEE
      EEFF477347B8477347B8477347B8477347B8477347B8477347B8477347B84C78
      4CBAEEEEEEFFE9EAE9FD477347B897AF9768424D3E000000000000003E000000
      2800000040000000500000000100010000000000800200000000000000000000
      000000000000000000000000FFFFFF00FFFF000000000000C03F000000000000
      000F000000000000C01F000000000000801F0000000000000603000000000000
      0FF10000000000001E000000000000001E000000000000001E01000000000000
      0F030000000000008017000000000000C03F000000000000E07F000000000000
      FFFF000000000000FFFF000000000000FFFFF000801FFC3FFFFFC00F8003E007
      FFFFC00F8001E0070021C00F8001C0030021C007800180010021C00180030001
      8421C000C0030000DEFFC005E0070000C007C00BF00F0000F81FEF93F00F0000
      F81FEF8FF00F0000F81FEF9FE00F0001F81FE79FE00F8001F81FE31FF00F8003
      F81FE03FF01FC007FFFFF87FF83FF00FFFDFFE3FFE7FFE01FE07E01FF81FFE38
      E003800FF00FE60180030003E00FE30100030001C007E30300030001C007E783
      000300018003E3C7000380018003E3C7000380018003E3C7000F00018003E3C7
      C01F00018001C3C7E01F0001800181C7E01F0001800180C7E01F8001E00300CF
      E01FE001F00F3C4FF03FF80FF81F007F00010001FFFFFFFF00010001FFC70000
      C0030001F0030000C0030001E0030003C0030001C0038003C0030001C0018003
      C0030001E0018003C0038001C0018003C003800180018003C003800108018003
      C003800110008003C003800130008003C0038001E0078003C0038003E0078003
      C0038003E007C003C0078003FFFFFFFFFFFFFFFFE0FF0000FFFFCFFF001F0000
      C003C000001F0000C0038C0000030000C003800000000000C003800180010000
      C003800180010000C0038001E0010000C0030001E0010000C0010001C0030000
      C0010001C0070000E0710001C0070000E07FC007E0070000FFFFFC07F0070000
      FFFFFFC7FE070000FFFFFFFFFF0F000000000000000000000000000000000000
      000000000000}
  end
  object ImageList2: TImageList
    Left = 216
    Top = 264
    Bitmap = {
      494C01010B008C01040010001000FFFFFFFFFF10FFFFFFFFFFFFFFFF424D3600
      0000000000003600000028000000400000003000000001002000000000000030
      0000000000000000000000000000000000000000000000000000FEFEFE01DDDD
      DD22FDFDFD0200000000EEEEEE11FEFEFE010000000000000000000000000000
      00000000000000000000000000000000000000000000F4E9DC31D2A978BECEA3
      70C9E4CDB16D0000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000FEFEFE01DDDDDD22D3D3
      D32CCFCFCF30CFCFCF30D4D4D42BDADADA25E1E1E11EF2F2F20DFDFDFD020000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000F69F7EE4EC9A
      7BFF99695AC0A6A1A061FCB191FF8977719AD9D9D92600000000000000000000
      000000000000000000000000000000000000F0E1CF44D2A167D8FBF7F2120000
      0000DDBE9990D1AB7DB700000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000BAB8B6F6F2F1F1FFFFFF
      FFFFF0CBC0FFCFCEF8FFE5E4E2FFF9F8F8FFE3E2E2FFB8B7B7F88E8D8CCC8989
      8884CBCBCB34FCFCFC0300000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000FBD4C0FFFFEC
      DEFFFFF2E1FFFAB492FFFFF0E2FFFFEFDDFFE29273F99088857DE7E7E7180000
      000000000000000000000000000000000000D8A870CEFDFBF809000000000000
      000000000000E3C9AA78D1AB7ABA000000000000000000000000000000000000
      00000000000000000000000000000000000000000000D7D5D5FFECEBEBFFEFF3
      F3FFE48D6FFF817EEDFFD9D8D7FFE8E8E7FFB5B3B1FFD8D7D6FFFFFFFFFFFFFF
      FFFFE1E0DFFF7C7B7B9CF8F8F807000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000EDDDD736FFF6ECFFFFEE
      E0FFFFEADAFFFDE8DBFFFFEEE2FFFFEBDBFFFFE8D5FFFFE4CBFFC6765AEA9E9D
      9D62EAEAEA15000000000000000000000000D9A76BD500000000000000000000
      00000000000000000000E5CCAE72D3AB7CB90000000000000000000000000000
      00000000000000000000000000000000000000000000D1CFCEFFE8E7E7FFF5FA
      FCFFEB8B5AFF5D60FFFFCECCC0FFFFFFFFFF5D5B5BFFE4E3E3FFC9C7C6FFFFFF
      FFFFFCFCFCFFDFDEDDFFE0E0E01F000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000DCA68EB5FFF8EFFFFFF0
      E5FFF7C0A1FFFBF3EBFFFFEFE2FFFFECDEFFFFE9D6FFFFE5CFFFFFE4CCFFFFD1
      B2FFC25A3CEFB2B2B24DFAFAFA0500000000E9CCA97DE7C7A186000000000000
      0000DDB689A9D5A670CED7AD7ABDE3C8A77ED4AD7DB700000000000000000000
      00000000000000000000000000000000000000000000BAB8B6F6DFDEDEFFEFEF
      EEFFF8F8F9FFCECDCAFFFFFFFFFF999796FF5D5B5BFF626061FFFFFFFFFFD7D7
      D6FFFAF9F9FFDAD8D8FFEDEDED12000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000FFC4A9FBA1BF9EFF25C4
      3EFFFFE9DFFFC8A58DFFF0D9B8FFFFFCF5FFFFEADAFFFFE6D3FFFFE2CBFFFFDE
      C2FFFFDFC0FFFEB793FF8D6054B9ECECEC1300000000E0B27BC0EAD0B072FEFE
      FE01D8A669D800000000EFDDC84ED4A56DD1E4C7A67FD6AE7EB6000000000000
      00000000000000000000000000000000000000000000EEEDED30D6D4D3FFE6E5
      E5FFF6F5F5FFC8C7C6FFCFD2D2FFFFF2EBFF2B2A2BFFEAEAEAFFE7E8E8FFE3E2
      E1FFFAFBFAFFA2A1A0DA00000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000FFEBDEFF56C168FF7BC0
      5EFFF6FCFBFFD85029FFE88460FFDD7F58FFF9F2CCFFFFF7EBFFFFE4D2FFFFDF
      C5FFFFDBBEFFFFD9B8FFD16E4FEA000000000000000000000000E2B27BC1ECD3
      B56BE0B784B2EED7BC6000000000F0DEC84ED5A66DD1E3C6A481D7AF80B40000
      0000000000000000000000000000000000000000000000000000D1D0CF7DDCDA
      D9FFBEBDBBFFDFDEDEFFEEE8DCFFFAE8DAFFD28669FFFFE5D6FFC8C8C7FFBCBA
      B9FFE1DFDFFFE9E9E91600000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000F7F0EC1DFFFDFDFF38DC65FFF7D5
      BAFFD4CEC2FFD85F3BFFF4A782FFDE9673FFE8815CFFE1CFA4FFFFF6CEFFFFF9
      E7FFFFE2CBFFFFD6B5FFCBC8C73800000000000000000000000000000000E2B3
      7BC0EDD3B36EDEB179C3EED8BD5F00000000F0DDC94ED7A66DD0E4C7A483D8B0
      80B400000000000000000000000000000000000000000000000000000000E9E9
      E83DBEBDBCFFAEACA8FF046BAFFF127DCEFF0D7ECFFF2F79A4FFD2BFB3FFC5C4
      C2FFE9E9E9170000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000D1BBAF71FEF7FDFF49F078FFFFFA
      FAFFECC4A2FFF0A376FF7D7175FFF5C8A8FFEE7253FF57C55CFF40C051FFFFEB
      C8FFFFF0E1FFD57B5DEF00000000000000000000000000000000000000000000
      0000E3B47CC0EED3B36EDEB079C3EED8BD6000000000F0DEC94ED7A76FD0E5C7
      A284D9B182B40000000000000000000000000000000000000000000000000000
      0000E7E7E81D1681CFFF298FDEFF298FDDFF298FDDFF2C92E1FF1F6F9FFFE2E2
      E21D000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000ECBEA5BAE1E0E1FFFFDBB4FFEAEE
      F0FFFFC79AFF2992E2FF3398E7FF4480B5FF33B635FF6BC56BFF41CD5EFF1DAB
      2DFFFFE8D0FFB3A9A65C00000000000000000000000000000000000000000000
      000000000000E3B57CC0EFD3B36EE1B27AC2EED7BB6200000000F1DFC94DD7A8
      6ED1EDD8BE5C0000000000000000000000000000000000000000000000000000
      0000307FB0D6349AEAFF3399E8FF3399E8FF3399E8FF3399E8FF329AEAFF8E91
      9271000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000F6CAAFE4D5D2CBFFFFDBC1FFD1BF
      B4FFF2B28FFF1972B0FF49AEFEFF398AC5FF242332FF205FA9FF5FAC4AFFFEEE
      E3FFF7B192FFF9F9F90600000000000000000000000000000000000000000000
      00000000000000000000E4B57CC0EFD4B56DE2B37BC1EFD7B96400000000F1E0
      CA4CD9A76BD40000000000000000000000000000000000000000000000000000
      00002F96E3FF3DA3F4FF3DA3F4FF3DA3F4FF3DA3F4FF3DA3F4FF41A7FAFF456B
      81BA000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FEDAC3FFD5C6B8FFFFF9F2FFE4A3
      86FFFBAC83FF006DB2FF1378C0FF6F6059FF2B537DFF2F85DCFF8C7160FFFFF6
      EAFFB38371B90000000000000000000000000000000000000000000000000000
      0000000000000000000000000000E6B57DC0EFD4B36EE6BD8DA8000000000000
      0000F2E0CA4CD8A66AD8FEFEFE0100000000000000000000000000000000F9FA
      FB064AB2FFFF4BB3FFFF48ADFFFF47ADFEFF47ADFEFF47ADFEFF4AB0FFFF2F69
      8DD4000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FFEADCFFDAB8A2FFFBFFFFFFFA98
      72FFFAA17CFFFDA57CFFFEAA81FFF2A985FF575C5DFF252E38FFFFC7A3FFFFEE
      DDFFC0BCBB460000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000E7B67CC1EFD5B56C000000000000
      000000000000F1DDC553E0B583B300000000000000000000000000000000FEFE
      FE01005688FF004270FF2585CAFF4CB2FEFF4CB2FFFF4BB1FFFF50B6FFFF4B73
      89B4000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FFF5ECFFE2BFA4FFF3F6F8FFD3B2
      A7FFE0977CFFF5946FFFFE9C76FFFBA27DFFFFAB84FFFFB18AFFFDDECDFFFCC7
      ADFFF3F3F30C0000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000E8B77CC1EFD3B0730000
      00000000000000000000DBA463E4000000000000000000000000000000000000
      0000005689FF006198FF08578CFF12659DFF359CE8FF40A8F4FF2680BEFFB9BB
      BC46000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FFFAF3FFCEB7ABFFE5C4A9FFFCD5
      B8FFFFE7D4FFFCF5EFFFE9F0F1FFD4C9C3FFD8A591FFED9674FFFFF8F2FFCC94
      7BDFFEFEFE010000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000E9B77DC1EECF
      AA7C00000000F3DFC653E1B177C8000000000000000000000000000000000000
      0000779AAF880367A0FF096AA3FF1D7FBFFF258CCFFF126AA4FF285B7AD70000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FCD3B6FBFED8BEFFFDD5BBFFFBD8
      C1FFFCDBC9FFFBD5BFFFFAC9AEFFF7B48FFFFCC3A3FFFEE1CEFFFFF3E8FFA591
      898B000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000EECB
      A18AE4AD6BDAEAC292A1FEFCFA06000000000000000000000000000000000000
      000000000000648CA49B187AB7FF0F74B0FF076298FF567B92A9000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000D6D6D629C7C7C738B7B7
      B74881879184043464FF2F373AFF2F373AFF000000000000000000000000F1F2
      F10F9FA29F7980B58EB099C1A48FB3CDBA69C6D7CA4BE5ECE720F7F9F809FDFE
      FD02000000000000000000000000000000000000000000000000000000000000
      000000000000A1ABA15E578858AC3F8540C8518652B4889A8877E6E6E6190000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FEFEFE01FAFAFA05F5F5F50AF8F8
      F807FDFDFD020000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000C2C7
      CE40043464FF053F7AFFDDE1C0FF2F373AFF00000000FDFDFD02E1E1E120817F
      7F99718770FD4DCE6FFF71DF8EFF8BEBA4FFA1F4B7FF9DF2B3FE84DF9CF57BCC
      90CE8FD19FA3E9F5E92200000000000000000000000000000000000000009BAA
      9B6B2D892EDE1CB61EFE20C022FF21C025FF20C022FF1EBC20FF209721F09EAE
      9E6D000000000000000000000000000000000000000000000000FCFCFC03F8F8
      F807FAFAFA05FEFEFE010000000000000000FBFBFB04E6E6E619CFCFCF30D4D4
      D42BE8E8E817F5F5F50AFCFCFC03FEFEFE01000000000000000000000000F7F7
      F60CBBB8B26F8D887FBA7E796ED2807B70CF8F8A81B7C0BEB966C7CED63F013E
      7BFF053F7AFF1764A5FF9FD7F4FF135C9CFFF8F8F808CECECE327A7979A2B6B3
      AFFC778C76FE3DD063FF4CBC6AFF529A65FF6C9B77FF6F9E79FF6AA677FF55B1
      6CFF44B462FFD7EAC753000000000000000000000000000000005D865EA316A7
      19FE20C022FF38C568FF5BCCD3FF66CDFAFF47ADE6FF45BCB5FF2FC351FF1CB5
      1EFE7193719000000000000000000000000000000000FCFCFC03EBEBEB14D2D2
      D22DD1D1D12EDFDFDF20EBEBEB14F4F4F40BF2E9E523D9B7A983AA99927E9898
      9867B0B0B04FC7C7C738DADADA25ECECEC130000000000000000D2D1CD48716C
      60E77B6C59FFA98B6DFFC8A27BFFCAA47DFFAB8F70FF7F705CFF5A5852FF273D
      5CFF043261FFCAF3FDFF135C9CFF00000000D1D1D12E85858593CBC8C6F9BEBA
      B5FF758673FD45E06EFF21843CFFAA9C3CFFDAB838FFC7BB36FFBEBA3BFF9BB2
      38FF73A137FFD5DAA780F9F8EC1C000000000000000092A6926D109814FE1FBF
      21FF40C87CFF6CD2FEFF6BD1FFFF6BD1FFFF42A3EEFF51B5F5FF68CFFCFF40C7
      82FF1CB71EFEA3B6A36D000000000000000000000000F0F3F40F9EB6C76B8794
      9D7D8D8D8D729D9D9D62B0B0B04FC2C2C23DD5BFB565F3C8B2F6D9AB95E5AD84
      74C7937870A58784837E9A9A9A65C1C1C13E00000000D1CFCB4B645E52FCC09F
      7CFFFDDFABFFFEFADEFFFFFFF3FFFFFFF2FFFEF2DFFFFED4A1FFB99976FF635D
      51FF273D5CFF135C9CFFCBD2DB3800000000C2C2C23DD3D2D0ECD3D0CDFFB8B4
      AFFF95968CFE5C9F6AFF768472FFCF9B40FFF8C132FFF8D023FFEFD317FFF6E2
      11FFFBE712FFFBDE1AFFF9CE28FEF9E2AD70000000001F8322E618AE1CFF27C2
      34FF6FD7F5FF71D6FFFF70D6FFFF6FD5FFFF6ED4FFFF6ED3FFFF6DD3FFFF6CD2
      FEFF3AC66CFF20A321F3E1E2E11E0000000000000000C0D4E2493F9CD5FF48A2
      D6F84A94BFE94F7D9CCA607A8DAB7D828686AC968CABFFF0E0FFFFF0E0FFFFE4
      CDFFF9CDB1FEDFA58AF0AD7563C8A5A5A55AF3F3F2126E685CEDC8AA84FFFEEC
      B9FFFFF6C3FFFEEDB4FFFDE9AFFFFEEBB2FFFEF1BDFFFEF0C1FFFEE0AFFFB191
      71FF5B5951FFC6CDD5410000000000000000F1F1F111DFDEDCF0CCC9C5FFB0AB
      A7FFA39C95FFB9B2ACFF9E9891FFCDA134FFF8C231FFE6BF30FFD3C587FFD2C6
      8CFFC3B888FFDFC867FFF8C132FFF9DFA481DFE6DF3C0B8E11FE1CB81FFF43CC
      79FF77DDFFFF76DCFFFF75DBFFFF74DAFFFF73D9FFFF73D8FFFF72D7FFFF71D6
      FFFF69D4EBFF24C12CFF769D768C0000000000000000A3C5DB7059BFF0FF4CAD
      E1FF60C5F3FF61C8F7FF59BDEEFF3A9BD2F4A0A8B1F3FAEEDEFFF5E9D9FFFFEB
      DDFFFFE7D4FFFFE7CBFFDBA184EAA9A9A956AEABA48491846BFFFDDEADFFFCDD
      ADFFFCD69FFFFCD68EFFFCD992FFFCD88FFFFBD7A2FFFCD8A6FFFCD8A6FFFDD8
      A9FF806F5BFFB7B4AE75000000000000000000000000DCDBD9F1C4C0BDFFA49F
      99FFA09A93FFBBB3ABFF9D958DFFD0B628FFFBE021FFFBDE1CFFFBDC1BFFFADD
      1DFFF1D427FFF6D327FFFAD224FFFBE89C87CADECA660C9112FF1EBC20FF53D3
      9AFF48A9EEFF6ACEF9FF7BE0FFFF7ADFFFFF64B8D3FF6FCDECFF77DCFFFF76DB
      FFFF75DAFFFF41CA77FF2C9D2CE300000000FEFEFE0184B4D29A66CCF8FF5DC2
      F1FF50AEDDFF6CCEF5FF6ED3F9FF4EB7ECFFC8C6D2FF87C17BFF36C54BFF80DF
      8BFFCDE6BAFFFFF0DCFFBE8A76D0B5B5B54A817D71D0C2A17DFFFBCB9AFFF9BD
      89FFF9C190FFFACC96FFF9CE91FFF8CC90FFF8C593FFF8C391FFFAC491FFFDC8
      96FFC59977FF89857BC00000000000000000FEFEFE01D7D6D3F3BCB8B4FF9E98
      92FFA29C95FFADA49CFF9C948CFFA69F77FFD2CE7FFFDED97CFFE4DF78FFEAE4
      6DFFF2EB63FFFAF254FFFDF34AFEFBF3A280C7DEC76C0C9112FF1DBA20FF54D5
      95FF4EAFEFFF69CCF7FF81E6FFFF80E5FFFF17292EFF284952FF7DE2FFFF7CE1
      FFFF66CAF8FF55CFAFFF1AAF1BFEF5F7F51FFDFDFD0271B0D4BF6FD4F9FF6BD0
      F7FF5FC0ECFF5BB7E0FF7CDEFAFF60B6DFFFDDD0D6FF7BBA6BFF21D842FF37B4
      73FF1EAE47FFB6DCA1FFB68C80BAC1C1C13E6B6558F9D8B089FFF9BA88FFF4B6
      83FFF1B27EFFEFB382FFF0B583FFEEB280FFEEB07EFFF0B280FFF6BC89FFF9B9
      87FFDEAD85FF716C60E70000000000000000FEFEFD05D3D0CDF7B8B3AFFF9F99
      93FFA49D97FF91887FFF716962FF96918CFFB7B2AEFFC6C1BCFFD0CCC7FFD8D3
      CFFFDFDBD6FFE7E2DEFBFCFCF80E00000000D2E3D2560C9112FF1AB31DFF44CF
      6EFF89EDFFFF88ECFFFF87EBFFFF86EAFFFF376169FF182A2EFF75D0E5FF82E7
      FFFF3595E8FF47B8BDFF1EBA1FFFEEF4EE35F2F4F60E65B4DAE778DAF9FF72D3
      F6FF73D6F8FF65C4EBFF57B8E1FF63A9D1FFEEDCD6FFD8C093FF61C364FF5B7E
      A6FF3EA44FFFC5D4A6FFAB9187A0CECECE31645E52FCD6AA84FFF8B985FFEFAE
      7BFFECAA78FFECAA78FFECAA78FFECAA78FFECAA78FFECAA78FFEEB07DFFF5B5
      82FFDAA67EFF6F6A5EEA0000000000000000FDFCFC0BD2D0CDFCB9B4B0FFA09A
      94FF979A9BFA2E90B3FF2D86A0FF428796FF558A97FF739098FF8F9393FF9F9A
      95FFB2ABA5FFDFE6DF640000000000000000EDF1ED210A8A0FFE15A519FF26C3
      2FFF89F0F4FF8DF2FFFF8CF1FFFF8BF0FFFF3D6970FF61A8B3FF28464BFF84E7
      F9FF82E7FDFF61D7B9FF1DB91FFFEFF5EF33D6E2EB2D6DC5E5F780DFF9FF7FDE
      F8FF77D7F6FF51B1E2FF3094D3FF7EBEDDFFF8DCCAFFF6B393FF99B7DAFF93D2
      FFFFC0BEA8FFFAD6C0FBA0918C82DADADA25797368DBBC9878FFF5B583FFF3B4
      81FFEEAC7AFFECAA78FFECAA78FFECAA78FFECAA78FFEDAB78FFF0B07DFFF0AF
      7FFFBE9876FF827D73CC0000000000000000FBFBFB12D4D1CEFFBAB6B2FFA19C
      96FF6B879EFA04C6FEFF02DCFEFF01E7FFFF01ECFFFF01E7FFFF02DAFEFF07C9
      F9FF19BDF2FFB3E4F46E0000000000000000000000003A903DC90E9514FF1EBD
      21FF59DB8FFF92F7FFFF91F6FFFF90F5FFFF3F6B70FF79CED7FF6EBBC4FF86E6
      F2FF8CF1FFFF51D687FF19AB1BFDF8FAF815B5CEDE5980DBF2FE8DE9FBFF70CE
      EEFF46A4D7FF51AEDFFF62CBF5FFB3DBE6FFD3C0B6FF978683FF3E79ABFF88B4
      DAFFDABCB7FFEEC9B5F3A3A09E64E2E2E21DA5A19A938E7F68FFE9A87BFFF9BC
      88FFF6B884FFF2B37FFFF1B07DFFF1B17EFFF3B380FFF4B682FFF4B784FFE09E
      75FF8F7E66FFAEABA4840000000000000000FBFBFA16D5D3D0FFBBB7B3FFA39D
      98FF6A879EFB05B5FEFF04CBFEFF2DB5D6FF82C3D6FF8BCBDBFF7FC9DBFF27C9
      F2FF05BCFEFF8CDCFA89000000000000000000000000ADBEAD520C8F11FE15A6
      19FF22C126FF77EBC4FF96FAFFFF95F9FFFF37636DFF78CDD6FF93F7FFFF92F6
      FFFF87F1ECFF28C331FF42A143C700000000A1C7DB7E90E9F7FF67C2E4FF53AE
      DAFF71CEEEFF7DDEF9FF72D8F8FFC8DCDCFFB4A5A0FF94807CFF4C6887FF5764
      7FFFECB7A4FFD8BBACDBB4B4B44BEBEBEB14E8E8E624736D5DF9AC8466FFEAAA
      7CFFFBCF9EFFFFFCF1FFFFFFFFFFFFFFFFFFFFFBEFFFF8C391FFDD9F74FFA27D
      61FF777162F4F0EFEE180000000000000000FAFAFA1BD7D4D1FFBDB9B5FFA49F
      99FF688FA5FD04CEFEFF03CFFEFF04D4FEFF04D9FEFF0BDAFDFF28D0F2FF11D2
      FDFF04CEFEFF85E5FB8F00000000000000000000000000000000529654AF0D92
      13FF19B01CFF24C22AFF69E5A7FF98FCFDFF388CCDFF66C4E9FF97FBFFFF8CF5
      EBFF3ACC53FF1CB71EFEB1C1B14E0000000088BAD7A16FC6E1FF7AD1E8FF99F4
      FCFF99F5FEFF90EDFBFF8DEBFCFFCDD7CDFFACA8A3FFBCAEA5FFD5CEC8FFD8C0
      B4FFF8D9C9FFD4B5A6BAD7D7D728F6F6F60900000000BBB8B26F665F51FFAD84
      66FFE7AC81FFF8E0C7FFFFFDFBFFFEFCFBFFF6DCC1FFD8A078FFA77F62FF675F
      52FFC7C5C15A000000000000000000000000FAF9F920D8D5D3FFBFBAB6FFA5A0
      9AFF87A3AEF530DFF9F930E5FCFC2FEAFDFE2FEDFEFF31EEFEFF2CEDFEFF2DED
      FEFF2FEDFEFF8AEFFC9100000000000000000000000000000000F0F0F00F388E
      3BCB0D9213FF18AD1BFF1FBF21FF32C943FF52D785FF59D996FF4FD878FF27C3
      2FFF1DB91FFE89BA898D0000000000000000C6DBEA4295C0D98B95C2D99588BD
      D6AC82BAD4B682C3DACB80C4DBD275BED6EA81A2ADFF8DB2BCF896D1DDF483BB
      D0FBB5B7B9B6DFD3CC49F3F3F30CFDFDFD020000000000000000C8C5C05B6C66
      5AF07E6B58FFAC8365FFC5906DFFC38E6BFFA98063FF7D6A57FF6F6A5EEACECB
      C75300000000000000000000000000000000F9F9F827D9D7D5FFC8C3C0FECEC9
      C5FFDFDBD7FFDEDAD7FFDAD6D3FFCED0CDFDBDC6C5FAB0C1C0F79DC1C0F79FC7
      C8D3A6E1E78DE6F9FB200000000000000000000000000000000000000000F2F2
      F20D5D985EA40B8C10FE119D16FF1AB21DFF1FBE21FF20C022FF1EBB20FF2EA2
      2FE09CB59C6400000000000000000000000000000000FCFDFE03F7FAFB08EBF2
      F716E4ECF31EDDEAF22CD9E8F032CADEE74BADB1B2A6A6BFCF7AA5C8DD6A8DBA
      D784DAE2E82FF8F8F807FEFEFE0100000000000000000000000000000000EEED
      EC1B9F9B939C6F6A5EEA635D50FF635D50FF716C60E7A39F9896F2F1F0150000
      000000000000000000000000000000000000FAFAFA1BE7E5E393E5E2E0A1E5E1
      DEAEE2DFDBBEE1DDDACBDFDBD8D7DCD8D4EBD8D5D1C6D7E3E379EAF6F62B0000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000CCD5CC3877AB789A419C44CE2E9330DB5DA65EB8ABC0AB5E0000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000DFCAA758000000000000000000000000E5D2B44BE0CAA758F7F3EC130000
      000000000000000000000000000000000000000000006569BAC7707EE0FC6A6D
      BEA2000000000000000000000000000000000000000000000000000000000000
      000000000000FDFDFE020000000000000000000000000000000000000000BFA5
      93FFF8EBE3FF938F8DADC4C2C15FFCFAF928FDFBFB1CFEFEFD0AFEFEFE06FEFE
      FE02FEFEFE01000000000000000000000000AEAEAEFF949494FF000000000000
      0000000000000000000000000000AEAEAEFF949494FF00000000000000000000
      00000000000000000000888888FF888888FF0000000000000000F1E8DA25E589
      29FFFF9D3FFFCA9F5EA40000000000000000D3AC7292FFA753FFFCA34DFFCD91
      41D8D3B38082000000000000000000000000B9B9DC487A83E6FF6A80FFFF263C
      D9FCEBEBF5140000000000000000000000000000000000000000000000000000
      00007677C48B8688D97A00000000000000000000000000000000000000008A5D
      3FFFECE1DCFFF1E3DCFFD9CEC6FBB2B0AF72E9E7E645FCFBFA26FCFBFB1CFEFD
      FD0EFEFEFE0AFEFEFE04FEFEFE03FEFEFE01AEAEAEFF949494FFDCC299FFDCC2
      99FFDCC299FFDCC299FFDCC299FFAEAEAEFF949494FFDCC299FFDCC299FFDCC2
      99FFDCC299FFDCC299FF888888FF888888FF00000000E7D8C03FC38732D8FF9A
      3DFFFF9839FFD08324F4C39D5EA1C29B5CA3C48831DBFFA550FFFFA755FFFEAC
      5CFFC7852CF0000000000000000000000000A0A0D3644D54DEFF2536EBFF0A1F
      D9FEE2E3F21D000000000000000000000000000000000000000000000000DCDC
      ED230D15BFF8B1B1DE4F00000000000000000000000000000000000000008233
      00FFDED5CEFDE8DBD4FDE6DBD4FEE8DDD6FEEEE3DDFFB5AEABE69896959CF5F3
      F13FFCFAF935FCFAFA29FCFBFA25FEFEFE0600000000DCC299FFFFFFFF7FFFFF
      FF7FCCCECE9CFCFCFC80F3F3F385F5F5F584F9F9F982FFFFFF7FFFFFFF7FFFFF
      FF7FFFFFFF7FFFFFFF7FDCC299FF0000000000000000CA8A35D8F59434FFFF99
      3AFFFF9A3EFFFF9E41FFFFAC5BFFFFAA57FFFFA34CFFFFA958FFFFAC5FFFCB9C
      57B3F9F5F00F00000000F8F3ED1200000000E9E9F3161418BFFB060EDBFF0412
      D8FF7B7CC2860000000000000000000000000000000000000000000000002B33
      BAD91821C1EE000000000000000000000000000000000000000000000000963D
      01FED5C5B7FFE8DFD9FFE9DDD7FDE9DDD8FFE9DFD7FDEEE3DDFFF6EDE7FF9793
      92B3BDBBBA69FCF9F845FCFBFA380000000000000000DCC299FFFFFFFF7FCFCF
      CFD9606365FF6D8086FFBABABAFFBBBBBBFFBBBBBBFFBBBBBBFFB7B7B7FFB8B8
      B8FFCECECED9FFFFFF7FDCC299FF0000000000000000F2EADD22C8964CB9FF9C
      40FFFF983CFFFFD6A5FFF8D7ACFFFFDAAFFFFFCD97FFFFA959FFFFB165FFCCA9
      6F9300000000D9BE936EC49852BC0000000000000000595AB9A60002CFFF0309
      D8FF070EC0FBD9D9EB2600000000000000000000000000000000797BC5880C21
      DFFF9B9CD2650000000000000000000000000000000000000000E1D8D263AF55
      0DFDCC9F77FFEDE4DFFFEBE2DEFDEAE2DBFFEBE0DCFDEAE2DDFDECE1DCFFECE2
      DDFDEDE5E0FFFCF3EEFFF3F3F30C0000000000000000DCC299FFFFFFFF7FBBBB
      BBFFFDFDFDFFA1AFB5FF69929FFFEBF3F5FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFBBBBBBFFFFFFFF7FDCC299FF00000000BA8128DCD5B5857CCEAA738DFFAA
      56FFFDDBB0FFDBC2A05FFEFEFE01F6F0E817D0AF7F81FDD6A8FFFFB46BFFF9BB
      79FFC38E3BF8FFC17CFFF9D7A8FFFCFBF90600000000FDFDFD021D1EAFE30001
      D0FF0106D5FF2226B1DF000000000000000000000000A9A9D3570C28E5FF2633
      BEDF000000000000000000000000000000000000000000000000C3B7ACA6BE62
      1AFEC9905CFDEFE7E1FDEDE6E0FEEDE5E0FDEBE4DDFEECE2DDFEEBE4DFFDEDE3
      E0FEEDE5DFFDEFE8E3FFFDFCFB240000000000000000DCC299FFFFFFFF7FBBBB
      BBFFFFFFFFFFC8CCCDFF34606DFF5DB4CFFFF6FAFDFFFFFFFFFFFFFFFFFFFFFF
      FFFFBBBBBBFFFFFFFF7FDCC299FF00000000CF9E59AEED9539FFE08D2FFFFFC0
      80FFEDD0A2FF00000000000000000000000000000000DAB070F5FFC485FFFFBC
      7BFFFFD5A7FFFFB86EFFFFD9A9FFEBDDCA350000000000000000E8E8F3171011
      B4EF0000D1FF0103CEFF595BB8A700000000B1B1D84F0A1ED3FC0B25DFFED1D1
      E62E0000000000000000000000000000000000000000F8F7F5149E7E66FFCD75
      32FDDE8E4DFFF4EEEAFFF2ECE7FDF1E9E5FFEFEAE6FDEFE8E4FDEDE5E1FFEDE6
      E3FDEFE8E2FFEFE7E3FFFCF8F78300000000AEAEAEFF949494FFFFFFFF7FBBBB
      BBFFFFFFFFFFFFFFFFFFA5CBD7FF2C5968FF6EC1DBFFFCFEFEFFFFFFFFFFFFFF
      FFFFBBBBBBFFFFFFFF7F888888FF888888FFD6B6857DFFA550FFFFA44FFFFFB5
      6AFFEFC892FF00000000000000000000000000000000DFC9A758E1A153FCFFBC
      7BFFFED2A1FFC7984DFECA9C52FEBC8A38D6000000000000000000000000E2E2
      F11D1415B4EC0000D2FF0101C4FF4D4DB7B4060DC2FB0514E1FF6E70BD930000
      00000000000000000000000000000000000000000000E7E0DB58AD8161FFD17A
      38FEED9350FDF6F4F3FDF4EFECFEF1EDEAFDF2EBE9FEF1EBE6FEF0EAE6FDEEE7
      E5FEF0E9E4FDF0EAE6FFFAF5F3B300000000AEAEAEFF949494FFFFFFFF7FBBBB
      BBFFFFFFFFFFFFFFFFFFFFFFFFFF94C0CEFF2E5965FF83CDE6FFFEFFFFFFFFFF
      FFFFBBBBBBFFFFFFFF7F888888FF888888FFDABF956CFFA957FFFFA957FFFFAB
      5CFFFAC385FFF3ECE11E000000000000000000000000E5D3B847DD9E51FAFFC0
      81FFFDD7A9FFDFCAAF50E9DAC53AEBDDC7380000000000000000000000000000
      0000F5F5FA0A2C2CB0D50001CCFF0000CCFF0103D1FF3638B2CB000000000000
      00000000000000000000000000000000000000000000CABCB1DDD08750FFD881
      42FEFFB077FDF79E61FDE39863FEE5DED8FDF7F7F9FEF5F1EEFEF4EEEDFDF3EE
      EBFEF0EBE8FDF2EBE8FEF4EFECFF0000000000000000DCC299FFFFFFFF7FBBBB
      BBFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF83BED0FF38606DFF93D6ECFFFFFF
      FFFFBBBBBBFFFFFFFF7FDCC299FF00000000E7D7BC43D19648D1CBA163A5FAAE
      62FFFFB369FFF0A95DFFC8944ACEF0E6D827F1E8DB24D2994BECFEC488FFFFCF
      9AFFF3D5A9FFF8F3ED1200000000000000000000000000000000000000000000
      0000E2E2F21D3235B7D00207CFFF0103D2FF0001C9FF7677C18A000000000000
      00000000000000000000000000000000000000000000CCBBB0FFDE8846FFE392
      59FDFFBC86FFFBB47DFFFFB67EFDF3A469FFDFA275FDE8E6E4FDF7F3F1FFF5F1
      EEFDF4F0EDFFF3EEEBFDF3EEEAFF0000000000000000DCC299FFFFFFFF7FBBBB
      BBFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF77C7E0FF3D646FFF97D9
      EEFFBBBBBBFFFFFFFF7FDCC299FF00000000FBF8F40BF8F4ED12FDFBFA05E9A1
      4FFFFFB872FFFFBA77FFFBB773FFD2974BE7D1974BE6FDC488FFFFC68CFFFFD9
      ADFFFCDFB8FFC38E3EDBC59C5AA6FEFDFD020000000000000000000000007174
      CA920E1DD0FA0717E4FF0510DEFF0D12BAF30406C0FC0608CCFF6061BDA10000
      00000000000000000000000000000000000000000000D6B094FFF4AD70FDF5BA
      8BFEF8B785FDE6975AFDECA76EFEF6AB70FDE79657FEECAA72FEE8E1DCFDF8F5
      F4FEF6F5F2FDF7F4F2FEF4F0EEFF0000000000000000DCC299FFFFFFFF7FCFCF
      CFD9BBBBBBFFBBBBBBFFBBBBBBFFBBBBBBFFBBBBBBFFBABBBBFF55AAC4FF375F
      6AFF85C1D3E8FFFFFF7FDCC299FF0000000000000000C39852B6E7B36FFFFFB4
      6CFFFFC58AFFFBC182FFFFC78CFFFFBF7FFFFFC083FFFFCD98FFFFDBAFFFFDE3
      BEFFFFCE93FFFFE6C0FFD3AA69EE00000000000000009A9BD2714F58D1EC3D57
      F7FF1D3CFAFF0D26F0FF1820BFEBEBEBF514C3C4E43C191BBDED2325D4FF494A
      BACAF9F9FC0600000000000000000000000000000000E4D1C2FFF2B073FFE29F
      67FDE7A772FFFFC68FFFF7AF73FDEA9C5CFFF4AB6EFDEE9D5DFDE3A572FFF6F9
      FBFDFBFCFDFFF8F6F5FDF8F5F4FF0000000000000000DCC299FFFFFFFF7FFFFF
      FF7FFFFFFF7FFFFFFF7FFFFFFF7FFFFFFF7FFFFFFF7FFFFFFF7FF9FCFC826DC3
      DDD0426D7AE7B1E4F4A9DCC299FF0000000000000000DEC6A35ED1A868E7FFC4
      87FFF9CC97FFC89A55CADDAC67FFFFD2A1FFFFD2A2FFF1CE9DFFD5AC6AFBD3A9
      6AF0FFE4BDFFDDB77CFCD9BE9669000000008487D0E6A2ABF7FF8D9DFFFF6A7F
      FFFF3A55F9FF313BC0D6EFEFF7100000000000000000FDFDFE025B5BBEAE3F40
      D1FE494AC3F4A1A2D56500000000000000000000000000000000F7F5F31EDDD3
      CCE8ECE1D9FFEEE6E1FFECE4DEFFD8CDC7D4D8BBA6FFE99F5DFFF0A35FFDEEA4
      63FEF8B474FFF7EDE642F5EFEA9B00000000AEAEAEFF949494FFDCC299FFDCC2
      99FFDCC299FFDCC299FFDCC299FFAEAEAEFF949494FFDCC299FFDCC299FFD3BF
      99FF60ACB9FF3D666DFF7A9DA7FF888888FF000000000000000000000000C798
      4DEECEAB719A00000000F5EEE51AFFC684FFFFC380FFD1A867E6F4ECE21DFCFA
      F807CBA465AAEFE5D52A00000000000000008688CCD8B6BBF5FFA3ACFBFF6972
      E0FA7678C898000000000000000000000000000000000000000000000000C7C7
      E5385455C1D46061CCFA5A5ABCDBACADD9540000000000000000000000000000
      0000F2EEEB34ECE2DCC5FEFBFA4800000000FAF8F619DFD6CFD3D9BAA3FFF0AD
      6EFAFDF3EB20000000000000000000000000AEAEAEFF949494FF000000000000
      0000000000000000000000000000AEAEAEFF949494FF00000000000000000000
      0000EFF6F81085B1BFD5395A62FF74787AFF000000000000000000000000E9DA
      C53AF6EFE61900000000E6D4B946FFE8C0FFFFD7A3FFE8C895FEDCC39C640000
      0000F6F0E718000000000000000000000000DEDEEF259091D1C3999DE2DF9495
      D27F000000000000000000000000000000000000000000000000000000000000
      0000EDEDF7127C7DC8986062C4DE8383CA840000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000E4EFF31B72848A98000000000000000000000000000000000000
      00000000000000000000F8F3EB14E3CEB14FD9BF986CC89F5BB7BB8B39CE0000
      000000000000000000000000000000000000424D3E000000000000003E000000
      2800000040000000300000000100010000000000800100000000000000000000
      000000000000000000000000FFFFFF00C4FF87FF801F0000C07F13FF80030000
      C01F39FF8001000080077CFF800100008001307F800100008000843F80030000
      8001C21FC00300000001E10FE00700000003F087F00F00000003F847F00F0000
      0003FC27F00F00000007FE31E00F00000007FF39E00F00000007FF9DF00F0000
      0007FFC9F01F0000000FFFE1F83F0000FF80E00FF81FFF07FFE08003E00FC300
      E0000003C0078000C00100018003800080010000800180000003000000018000
      0003800000010000000300000000000000030001000000000003000300000000
      0003000380000000000300038001000000030003C001000080070003C0030000
      C00F0003E0078001E01F001FF81FFFFFFFFFFFFFFFFFF71F8FFBE0073E7CC307
      07F3E0000000800707E3E0008001800507E7E0018001800983C7C00180010000
      838FC00180010780C10F800100000780E01F800100000380F03F800180010003
      F03F800180010000E01F80018001800180078001800180010183C0010000E403
      07E0F1073E70E4170FF0FFFFFFF9FC1F00000000000000000000000000000000
      000000000000}
  end
  object ImageList3: TImageList
    Left = 288
    Top = 264
    Bitmap = {
      494C010103000800040010001000FFFFFFFFFF10FFFFFFFFFFFFFFFF424D3600
      0000000000003600000028000000400000001000000001002000000000000010
      00000000000000000000000000000000000000000000FAFAFA05ECECEC13E3E3
      E31CE2E2E21DE5E5E51AE9E9E916EEEEEE11F4F4F40BFBFBFB04FEFEFE010000
      0000000000000000000000000000000000000000000000000000000000000000
      0000FEFEFE01F9F9F906F4F4F40BF3F3F30CE7E7E718D1D1D12EC7C7C738CECE
      CE31DFDFDF20F2F2F20DFDFDFD020000000000000000FCFCFC03F6F6F609F7F7
      F708F7F7F708F7F7F708F7F7F708F7F7F708F7F7F708F7F7F708F7F7F708F7F7
      F708F7F7F708FCFCFC0300000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FEFEFE01E9E9E916BDBDBD42A0A0
      A05F9F9F9F60A5A5A55AADADAD52B6B6B649C4C4C43BD3D3D32CDFDFDF20E8E8
      E817EFEFEF10F6F6F609FCFCFC03000000000000000000000000FEFEFE01F7F7
      F708E6E6E619D0D0D02FC4C4C43BBEBEBE41A19D9B72958C859E7676778E8282
      827FA2A2A25DCCCCCC33F1F1F10EFEFEFE0100000000F2F2F20D8D8D8D7C8989
      897D8989897D8989897D8989897D8989897D8989897D8989897D8989897D8989
      897D8A8A8A7DC4C4C43B00000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000F7F7F708656465A4524345E44A3B
      3DE64E4446DB5E5B5BD05B5A5AC05C5C5CA87878788A8D8D8D729B9B9B64AAAA
      AA55B9B9B946CACACA35E3E3E31CF8F8F807FEFEFE01F5F5F50AE3E3E31CCBCB
      CB34A5A4A46A918F8FAF777778919E887FC1E8D6BEF4BFD5AAFF9B9381FF7562
      5EE8746D6EA4A5A5A55AE0E0E01FFCFCFC0300000000F0F0F00FFFFFFFFFEEEE
      EEFFEEEEEEFFEEEEEEFFEEEEEEFFEEEEEEFFEEEEEEFFEEEEEEFFEEEEEEFFEEEE
      EEFFF2F2F2FFA7A7A77B00000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000E5E5E51A3A3437F4714F55FF6645
      4AFF786367FFB38D90FFA77D82FFBDB8B8FF959090FB6B6868EA574B4BD4544E
      4FBC5F5F5FA087878778B9B9B946ECECEC13F5F5F50AD2D2D22DA3A2A26CB1B0
      B0CBDDDCDBFFB0AEACFFAA8577FAF6C9A9FF7F9875FF2FAE3EFF51B057FFC6D1
      A9FFC0A69BEBAFACA961E2E2E21DFCFCFC0300000000F0F0F00FFFFFFFFFE7E7
      E8FFE7E7E8FFE7E7E8FFE7E7E8FFE7E7E8FFE7E7E8FFE7E7E8FFE7E7E8FFE7E7
      E8FFEAEAEBFFA7A7A77900000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000CDCDCD324B3E41FA775257FF6A46
      4BFF826D70FF816568FF917477FFDDDADAFFD7D4D3FFCDC8C7FFAE8185FF533A
      3FFF222225FF323132D6A6A6A659E6E6E619DCDCDC42C8C8C8D4E9E8E8FFF2F2
      F1FFE8E7E7FFC4C2C1FFA96E58FF2B495EFF287AB4FF3687A8FF53A947FFC0D1
      9DFFE8D7C3D3E2DBD73BF6F6F609FEFEFE0100000000F0F0F00FFFFFFFFFE8E8
      E9FFE8E8E9FFE8E8E9FFE8E8E9FFE8E8E9FFE8E8E9FFE8E8E9FFE8E8E9FFE8E8
      E9FFEBEBECFFA7A7A77900000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000B8B8B847604A4FFE80565BFF7149
      4FFF907C7EFF524749FF7D7173FFE7E6E5FFDAD8D7FFCBC8C7FF836669FF4332
      37FF332E31FF312F31DDAAAAAA55E8E8E817D5D5D4C6F4F3F3FFEEEEEDFFE9E8
      E7FFE4E3E2FFD7D5D4FFBEB4B1FF7D7172FF5D5960FF9D7C6DFFE0B8A1FFAF98
      8FA9D2D2D22DFCFCFC03000000000000000000000000F0F0F00FFFFFFFFFA8A8
      A8FFD9D9D9FFA8A8A8FFA8A8A8FFB9B9B9FFA8A8A8FFB8B8B8FFA8A8A8FFBDBD
      BDFFECECECFFA7A7A77900000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000A9A8A85A76585DFF885A60FF784A
      50FF886669FF7E7172FF9F9697FFDDD8D8FFDBD8D8FFCDCACAFF544548FF3A2D
      31FF3A3034FF3B3939D0B0B0B04FEBEBEB14D1CFCEC6EAE9E9FFE5E4E3FFDFDE
      DDFFE3E1E1FFDBDAD9FFD3D1D0FFCBC8C7FFB8A39CFF976C66FF8F8381FF8C8C
      8C73D9D9D92600000000000000000000000000000000F0F0F00FFFFFFFFFAAAA
      AAFFE7E7E7FFAAAAAAFFD8D8D8FFADADADFFC5C5C5FFBCBCBCFFAAAAAAFFAAAA
      AAFFEEEEEEFFA7A7A77900000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000A19D9E6F856167FF8F5960FF9073
      79FF9DA6ABFF9AA1A6FF8D8D92FF7D7B7FFF7F787CFF7B7175FF443A3EFF402F
      33FF403135FF444142C5B6B6B649EEEEEE11CCCCCBC5E1E0DFFFDBDAD9FFDBD9
      D8FFEDECECFFE0A996FFC5613EFFCAA497FFD1CFCEFFC7C5C4FFADABA9FF8E8E
      8E71DADADA2500000000000000000000000000000000F0F0F00FFFFFFFFFAAAA
      AAFFAAAAAAFFE7E7E7FFAAAAAAFFAAAAAAFFE7E7E7FFAAAAAAFFC9C9C9FFD9D9
      D9FFEFEFEFFFA7A7A77900000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000009892948592686EFF965D63FFB9C4
      C7FFD2FFFFFFC6FFFFFFBCFCFFFFB3F6FCFFA8EEF5FF9BE0E7FF94D7DEFF7AA8
      AEFF45373BFF514D4EBCBBBBBB44F1F1F10EC1BFBEA6DCDBDAFFE0DFDEFFEDE6
      E6FFE6C3B8FFFAA27DFFEF8964FFD56740FFC46D4EFFCDB6ADFFBDBBBAFF9898
      9867DFDFDF2000000000000000000000000000000000F0F0F00FFFFFFFFF8B8B
      8CFFB1B1B1FFABABACFFABABACFFCACACBFFABABACFFD9D9D9FFABABACFFABAB
      ACFFF0F0F1FFA7A7A77900000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000085808195A47278FFA1656BFFC7D3
      D7FFCFF5F7FFC4E8EAFFC1EAEDFFBBE9EDFFB6EAEEFFB2F0F5FFAFF9FFFFA3F3
      F5FF4F4447FF575555B0C2C2C23DF4F4F40BC3C2C184C0BEBDFFD6BFB9FFE9B0
      99FFFEC9A2FFFEC49EFFFCB28CFFF89C78FFE9805BFFCD5D35FFBDBBBAF7B6B6
      B649EDEDED1200000000000000000000000000000000F0F0F00FFFFFFFFF61CD
      ACFF02623CFFACACACFFACACACFFCACACAFFABABACFFBFBFBFFFACACACFFBBBB
      BBFFEDEDEDFFA2A2A27900000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000007F7678A8B27980FFAB6C73FFD4E1
      E4FFDAFBFDFFD2F4F7FFCDF4F7FFC9F5F9FFC3F6FAFFBCF0F4FFB8F1F6FFA5DD
      E3FF544347FF5D5C5CA3C8C8C837F7F7F708E4E4E450E9E9E8F1EBCCBAFFDDA5
      8CFFF3A885FFFDC09AFFFECAA3FFFDC09AFFFBAC87FFEFBFACFFACABAAABDDDD
      DD22FBFBFB04000000000000000000000000FAFAFA05DCDCDC23EAEAEAFF39BF
      95FF05683DFFAEAEAFFFA2A2A3FFEFEFF0FFE5E5E5FFDBDBDCFFDBDBDCFFD5D5
      D5FFC5C5C6FFB9B9B95900000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000007E6F72BDC18188FFB4747BFFE0EB
      EEFFDAF0F2FFD3EBECFFCFEBECFFCAEAEBFFC5EAEDFFC1EAEEFFBFF1F5FFAAD3
      D8FF523D40FE6A6A6A95CFCFCF30FAFAFA0500000000F7F7F787FDE4D5FFFFE9
      D7FFE7CBB7FFDD9F84FFFCB08AFFFEC59EFFFBDDC7FFC6C5C4DCDEDEDE21F8F8
      F8070000000000000000000000000000000068A3859D096E3FFF096E3FFF2CC4
      9CFF096E3FFF096E3FFF096E3FFFF1F1F1FFE0E0E1FFA8A8A9FF868686FF8989
      89FFBBBBBBDE0000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000837073CCCE868EFFC37F86FFE9F5
      F6FFE5F9FAFFE0F6F7FFDCF5F7FFD6F3F5FFD0F1F3FFCBF0F3FFCBF9FCFFAFCA
      CFFF52393EFC79797986D6D6D629FCFCFC0300000000FAF7F583FEEEE1FFFFF8
      F2FFFFEFE2FFFFEDDFFFA4887CC6B6A79FD1CAC9C981F0F0F00FFBFBFB040000
      0000000000000000000000000000000000000D7640FF3CD5B7FF3CD5B7FF14C8
      A1FF2ED1AFFF3CD5B7FF64E2CDFFF1F1F2FFDEDEDFFFC4C4C4FFFFFFFFFFD6D6
      D6E8000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000917479DFB2737AFFB07F85FFF1F6
      F7FFE2EDEDFFDEEBECFFDAEAECFFD7EBECFFD4ECEDFFD0EAECFFD4F9FBFFAABC
      C0FF4C3337F89D9D9D63E2E2E21DFEFEFE0100000000FEF8F330FBE1CAC2FFED
      DEFFFFFAF5FFFFF9F4FFB3A29888D1D1D12EF8F8F80700000000000000000000
      00000000000000000000000000000000000000000000F0F0F00FFFFFFFFF3DE0
      C8FF107C41FFF3F3F4FFF3F3F4FFF0F0F1FFDADADAFFC6C6C7FFE3E3E3FF0000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000A77F85F1AE6F76FFB48D91FFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFDFFFFFFF2FFFFFFEEFFFFFFF0FFFFFFAAAE
      B0FF493739E2CFCFCF30F4F4F40B00000000000000000000000000000000FEF1
      E850FDE1CBE1FFF0E3FFDFD2C85EEBEBEB14FDFDFD0200000000000000000000
      00000000000000000000000000000000000000000000F4F4F40BFFFFFFFF3EE8
      D4FF138242FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFE5E5E4FF000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000847174C6A3797EDAAA9597D8B0B3
      B2D99C9E9EC79A9B9BBE9A9B9CBF979899BD949595A7969797A4959595A88F89
      8A92CBCBCB34F7F7F708FEFEFE01000000000000000000000000000000000000
      000000000000FEEFE350FAFAFA05FDFDFD020000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000001586
      43FF74B78F960000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000424D3E000000000000003E000000
      2800000040000000100000000100010000000000800000000000000000000000
      000000000000000000000000FFFFFF00801FF001800300000001C00080030000
      0000000080030000000000008003000000000000800300000000000380030000
      0000000780030000000000078003000000000007800300000000000780030000
      00000007000300000000800F000700000000801F000F00000000807F801F0000
      0001E07F803F00000001F8FFE7FF000000000000000000000000000000000000
      000000000000}
  end
  object ArcPrint: TfrxReport
    Version = '2021.3.4'
    DotMatrixReport = False
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick]
    PreviewOptions.Zoom = 1.000000000000000000
    PrintOptions.Printer = 'Default'
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 41557.026563055600000000
    ReportOptions.LastChange = 42998.921529328710000000
    ScriptLanguage = 'C++Script'
    ScriptText.Strings = (
      ''
      ''
      'void ArcDBarcDateOnAfterData(TfrxComponent Sender)'
      '{'
      
        ' ArcDBarcDate.Text = Copy(ArcDBarcDate.Text,1,4) + "-" +  Copy(A' +
        'rcDBarcDate.Text,5,2) + "-"  + Copy(ArcDBarcDate.Text,7,2);  '
      '}'
      ''
      '{'
      ''
      '}')
    Left = 393
    Top = 213
    Datasets = <
      item
        DataSet = ArcDB
        DataSetName = 'ArcDB'
      end>
    Variables = <>
    Style = <>
    object Data: TfrxDataPage
      Height = 1000.000000000000000000
      Width = 1000.000000000000000000
    end
    object Page1: TfrxReportPage
      Orientation = poLandscape
      PaperWidth = 297.000000000000000000
      PaperHeight = 210.000000000000000000
      PaperSize = 9
      LeftMargin = 10.000000000000000000
      RightMargin = 10.000000000000000000
      TopMargin = 10.000000000000000000
      BottomMargin = 10.000000000000000000
      Frame.Typ = []
      MirrorMode = []
      object MasterData1: TfrxMasterData
        FillType = ftBrush
        FillGap.Top = 0
        FillGap.Left = 0
        FillGap.Bottom = 0
        FillGap.Right = 0
        Frame.Typ = []
        Height = 22.677180000000000000
        Top = 241.889920000000000000
        Width = 1046.929810000000000000
        DataSet = ArcDB
        DataSetName = 'ArcDB'
        RowCount = 0
        object ArcDBarcID: TfrxMemoView
          AllowVectorExport = True
          Left = 980.898270000000000000
          Top = 1.000000000000000000
          Width = 62.803030000000000000
          Height = 18.897650000000000000
          DataField = 'arcID'
          DataSet = ArcDB
          DataSetName = 'ArcDB'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[ArcDB."arcID"]')
          ParentFont = False
        end
        object ArcDBmgroupName: TfrxMemoView
          AllowVectorExport = True
          Left = 757.315400000000000000
          Top = 1.000000000000000000
          Width = 98.267780000000000000
          Height = 18.897650000000000000
          DataField = 'mgroupName'
          DataSet = ArcDB
          DataSetName = 'ArcDB'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[ArcDB."mgroupName"]')
          ParentFont = False
          RTLReading = True
        end
        object ArcDBsgroupName: TfrxMemoView
          AllowVectorExport = True
          Left = 652.606680000000000000
          Top = 1.000000000000000000
          Width = 102.047310000000000000
          Height = 18.897650000000000000
          DataField = 'sgroupName'
          DataSet = ArcDB
          DataSetName = 'ArcDB'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[ArcDB."sgroupName"]')
          ParentFont = False
          RTLReading = True
        end
        object ArcDBtypeName: TfrxMemoView
          AllowVectorExport = True
          Left = 568.236550000000000000
          Top = 1.000000000000000000
          Width = 83.149660000000000000
          Height = 18.897650000000000000
          DataField = 'typeName'
          DataSet = ArcDB
          DataSetName = 'ArcDB'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[ArcDB."typeName"]')
          ParentFont = False
          RTLReading = True
        end
        object ArcDBsecName: TfrxMemoView
          AllowVectorExport = True
          Left = 494.543600000000000000
          Top = 1.000000000000000000
          Width = 71.811070000000000000
          Height = 18.897650000000000000
          DataField = 'secName'
          DataSet = ArcDB
          DataSetName = 'ArcDB'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[ArcDB."secName"]')
          ParentFont = False
          RTLReading = True
        end
        object ArcDBarcSubject: TfrxMemoView
          AllowVectorExport = True
          Left = 7.307050000000000000
          Top = 1.000000000000000000
          Width = 486.047319760000000000
          Height = 18.897650000000000000
          DataField = 'arcSubject'
          DataSet = ArcDB
          DataSetName = 'ArcDB'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          GapX = 4.000000000000000000
          HAlign = haRight
          Memo.UTF8W = (
            '[ArcDB."arcSubject"]')
          ParentFont = False
          RTLReading = True
        end
        object ArcDBarcDate: TfrxMemoView
          AllowVectorExport = True
          Left = 857.685530000000000000
          Top = 1.000000000000000000
          Width = 120.944960000000000000
          Height = 18.897650000000000000
          OnAfterData = 'ArcDBarcDateOnAfterData'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          ParentFont = False
        end
      end
      object PageFooter1: TfrxPageFooter
        FillType = ftBrush
        FillGap.Top = 0
        FillGap.Left = 0
        FillGap.Bottom = 0
        FillGap.Right = 0
        Frame.Typ = []
        Height = 49.133890000000000000
        Top = 325.039580000000000000
        Width = 1046.929810000000000000
        object Memo1: TfrxMemoView
          AllowVectorExport = True
          Top = 26.456710000000000000
          Width = 1046.929810000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = []
          HAlign = haCenter
          Memo.UTF8W = (
            '[Page#]')
          ParentFont = False
        end
        object Line1: TfrxLineView
          AllowVectorExport = True
          Width = 1046.929810000000000000
          Color = clBlack
          Frame.Typ = [ftTop]
        end
        object name3: TfrxMemoView
          AllowVectorExport = True
          Left = 3.779530000000000000
          Top = 3.779530000000000000
          Width = 1039.370750000000000000
          Height = 18.897650000000000000
          Frame.Typ = []
          HAlign = haCenter
        end
      end
      object Header1: TfrxHeader
        FillType = ftBrush
        FillGap.Top = 0
        FillGap.Left = 0
        FillGap.Bottom = 0
        FillGap.Right = 0
        Frame.Typ = []
        Height = 30.236240000000000000
        Top = 188.976500000000000000
        Width = 1046.929810000000000000
        object Memo11: TfrxMemoView
          AllowVectorExport = True
          Left = 980.898270000000000000
          Top = 1.000000000000000000
          Width = 62.803030000000000000
          Height = 26.000000000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Traditional Arabic'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Frame.Width = 0.500000000000000000
          Fill.BackColor = 15000804
          GapX = 4.000000000000000000
          GapY = -2.000000000000000000
          HAlign = haCenter
          Memo.UTF8W = (
            #1605#1593#1585#1601)
          ParentFont = False
          WordWrap = False
        end
        object Memo4: TfrxMemoView
          AllowVectorExport = True
          Left = 857.685530000000000000
          Top = 1.000000000000000000
          Width = 120.944960000000000000
          Height = 26.000000000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Traditional Arabic'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Frame.Width = 0.500000000000000000
          Fill.BackColor = 15000804
          GapX = 4.000000000000000000
          GapY = -2.000000000000000000
          HAlign = haCenter
          Memo.UTF8W = (
            #1578#1575#1585#1610#1582' '#1575#1604#1608#1579#1610#1602#1577)
          ParentFont = False
          WordWrap = False
        end
        object Memo5: TfrxMemoView
          AllowVectorExport = True
          Left = 757.315400000000000000
          Top = 1.000000000000000000
          Width = 98.267780000000000000
          Height = 26.000000000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Traditional Arabic'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Frame.Width = 0.500000000000000000
          Fill.BackColor = 15000804
          GapX = 4.000000000000000000
          GapY = -2.000000000000000000
          HAlign = haCenter
          Memo.UTF8W = (
            #1605#1580#1605#1608#1593#1577' '#1585#1574#1610#1587#1610#1577)
          ParentFont = False
          WordWrap = False
        end
        object Memo6: TfrxMemoView
          AllowVectorExport = True
          Left = 7.307050000000000000
          Top = 1.000000000000000000
          Width = 486.047319760000000000
          Height = 26.000000000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Traditional Arabic'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Frame.Width = 0.500000000000000000
          Fill.BackColor = 15000804
          GapX = 4.000000000000000000
          GapY = -2.000000000000000000
          HAlign = haRight
          Memo.UTF8W = (
            #1605#1608#1590#1608#1593' '#1575#1604#1608#1579#1610#1602#1577)
          ParentFont = False
          WordWrap = False
        end
        object Memo7: TfrxMemoView
          AllowVectorExport = True
          Left = 652.606680000000000000
          Top = 1.000000000000000000
          Width = 102.047310000000000000
          Height = 26.000000000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Traditional Arabic'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Frame.Width = 0.500000000000000000
          Fill.BackColor = 15000804
          GapX = 4.000000000000000000
          GapY = -2.000000000000000000
          HAlign = haCenter
          Memo.UTF8W = (
            #1605#1580#1605#1608#1593#1577' '#1601#1585#1593#1610#1577)
          ParentFont = False
          WordWrap = False
        end
        object Memo9: TfrxMemoView
          AllowVectorExport = True
          Left = 568.236550000000000000
          Top = 1.000000000000000000
          Width = 83.149660000000000000
          Height = 26.000000000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Traditional Arabic'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Frame.Width = 0.500000000000000000
          Fill.BackColor = 15000804
          GapX = 4.000000000000000000
          GapY = -2.000000000000000000
          HAlign = haCenter
          Memo.UTF8W = (
            #1606#1608#1593' '#1575#1604#1608#1579#1610#1602#1577)
          ParentFont = False
          WordWrap = False
        end
        object Memo10: TfrxMemoView
          AllowVectorExport = True
          Left = 494.543600000000000000
          Top = 1.000000000000000000
          Width = 71.811070000000000000
          Height = 26.000000000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Traditional Arabic'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Frame.Width = 0.500000000000000000
          Fill.BackColor = 15000804
          GapX = 4.000000000000000000
          GapY = -2.000000000000000000
          HAlign = haCenter
          Memo.UTF8W = (
            #1581#1575#1604#1577' '#1575#1604#1571#1605#1575#1606)
          ParentFont = False
          WordWrap = False
        end
      end
      object PageHeader1: TfrxPageHeader
        FillType = ftBrush
        FillGap.Top = 0
        FillGap.Left = 0
        FillGap.Bottom = 0
        FillGap.Right = 0
        Frame.Typ = []
        Height = 109.606299210000000000
        Top = 18.897650000000000000
        Width = 1046.929810000000000000
        object picLogo: TfrxPictureView
          AllowVectorExport = True
          Left = 442.205010000000000000
          Top = 4.000000000000000000
          Width = 120.000000000000000000
          Height = 100.000000000000000000
          Frame.Typ = []
          HightQuality = False
          Transparent = False
          TransparentColor = clWhite
        end
        object name2: TfrxMemoView
          AllowVectorExport = True
          Left = 738.803340000000000000
          Top = 46.779530000000000000
          Width = 252.063080000000000000
          Height = 57.795300000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Traditional Arabic'
          Font.Style = [fsBold]
          Frame.Typ = []
          HAlign = haCenter
          Memo.UTF8W = (
            #1608#1586#1575#1585#1577' '#1575#1604#1578#1585#1576#1610#1577' '#1608' '#1575#1604#1578#1593#1604#1610#1605)
          ParentFont = False
          RTLReading = True
        end
        object name1: TfrxMemoView
          AllowVectorExport = True
          Left = 701.008040000000000000
          Top = 3.779530000000000000
          Width = 331.433210000000000000
          Height = 38.677180000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'DecoType Thuluth'
          Font.Style = [fsBold]
          Frame.Typ = []
          GapY = -5.000000000000000000
          HAlign = haCenter
          Memo.UTF8W = (
            #1575#1604#1605#1605#1604#1603#1577' '#1575#1604#1593#1585#1576#1610#1577' '#1575#1604#1587#1593#1608#1583#1610#1577)
          ParentFont = False
          RTLReading = True
        end
        object ArcDBarcDateA: TfrxMemoView
          AllowVectorExport = True
          Left = 510.236550000000000000
          Top = 109.606370000000000000
          Width = 181.417440000000000000
          Height = 18.897650000000000000
          Visible = False
          DataField = 'arcDateA'
          DataSet = ArcDB
          DataSetName = 'ArcDB'
          Frame.Typ = []
          Memo.UTF8W = (
            '[ArcDB."arcDateA"]')
        end
      end
      object ArcDBarcDate1: TfrxMemoView
        AllowVectorExport = True
        Left = 888.189550000000000000
        Top = 139.842610000000000000
        Width = 79.370130000000000000
        Height = 18.897650000000000000
        Visible = False
        DataField = 'arcDate'
        DataSet = ArcDB
        DataSetName = 'ArcDB'
        Frame.Typ = []
        Memo.UTF8W = (
          '[ArcDB."arcDate"]')
      end
    end
  end
  object ArcDB: TfrxDBDataset
    UserName = 'ArcDB'
    CloseDataSource = False
    FieldAliases.Strings = (
      'arcID=arcID'
      'arcPostDate=arcPostDate'
      'mgroupName=mgroupName'
      'sgroupName=sgroupName'
      'typeName=typeName'
      'secName=secName'
      'arcSubject=arcSubject'
      'userFullName=userFullName'
      'arcDate=arcDate'
      'arcDateA=arcDateA')
    BCDToCurrency = False
    DataSetOptions = []
    Left = 457
    Top = 213
  end
  object fsScript1: TfsScript
    SyntaxType = 'PascalScript'
    Left = 625
    Top = 260
  end
end
