[Rainmeter]
AccurateText=1
DynamicWindowSize=1
BackgroundMode=2
SolidColor=0,0,0,1
DefaultAlwaysOnTop=-2

[TitleStyle]
H=#TitleHeight#
FontFace=Abril Fatface
W=#TotalWidth#
X=(#TotalWidth# / 2)
Y=R
SolidColor=#AccentColor#
AntiAlias=1
FontSize=28
FontColor=255,255,255
StringAlign=Center

[BarStyle]
X=#VisPaddingHorizontal#R
Y=r
BarOrientation=Vertical
W=((#TotalWidth# - (#VisPaddingHorizontal# * #Bands#)) / (#Bands#))
H=(#VisHeight# - (#VisPaddingVertical# * 2))
Group=Audio
BarColor=#VisBarColor#
SolidColor=#VisBarFill#

[FileChildStyle]
AntiAlias=1
FontFace=Playfair Display
FontSize=#FCFontSize#
Padding=#FCPadding#,#FCPaddingVertical#,#FCPadding#,#FCPaddingVertical#
FontColor=255,255,255
SolidColor=fea801
; Overridden in generated meters
H=(#FCFontSize# * 1.8)
ClipStringW=#FCMaxWidth#
ClipStringH=(#FCFontSize# * 1.8)
ClipString=2
Group=FileChild
DynamicVariables=1
X=r
Y=(#FCPaddingVertical# * 2)R
