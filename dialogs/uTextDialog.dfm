object TextContent: TTextContent
  Left = 0
  Top = 0
  Width = 400
  Height = 200
  Color = 2169368
  Font.Charset = RUSSIAN_CHARSET
  Font.Color = 14603725
  Font.Height = -13
  Font.Name = 'Arial'
  Font.Style = [fsBold]
  ParentColor = False
  ParentFont = False
  TabOrder = 0
  TabStop = True
  object pnlBackGround: TsPanel
    Left = 0
    Top = 0
    Width = 400
    Height = 200
    Align = alClient
    ParentColor = True
    TabOrder = 0
    SkinData.SkinSection = 'PANEL_LOW'
    object edMessage: TsRichEdit
      AlignWithMargins = True
      Left = 5
      Top = 5
      Width = 390
      Height = 190
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Align = alClient
      BorderStyle = bsNone
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentFont = False
      ReadOnly = True
      ScrollBars = ssVertical
      TabOrder = 0
      BoundLabel.Indent = 0
      BoundLabel.Font.Charset = DEFAULT_CHARSET
      BoundLabel.Font.Color = clWindowText
      BoundLabel.Font.Height = -11
      BoundLabel.Font.Name = 'Tahoma'
      BoundLabel.Font.Style = []
      BoundLabel.Layout = sclLeft
      BoundLabel.MaxWidth = 0
      BoundLabel.UseSkinColor = True
      SkinData.SkinSection = 'EDIT'
    end
  end
end
