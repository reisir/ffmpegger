; AudioLevelBeta *often* crashes if you !Refresh while Rainmeter > About > Skins is open

[Audio]
Measure=Plugin
Plugin=AudioLevelBeta
FFTSize=2048
FFTBufferSize=16384
FFTAttack=#Attack#
FFTDecay=#Decay#
Bands=#Bands#
FreqMin=#FreqMin#
FreqMax=#FreqMax#
Smoothing=#Smoothing#
DynamicVolume=1
UpdatesPerSecond=-1
OnUpdateAction=[!UpdateMeasureGroup Audio][!UpdateMeterGroup Audio][!Redraw]

; Meters
[VisualizerBackground]
Meter=Image
H=(#VisHeight# + #VisVerticalOffset#)
W=#TotalWidth#
SolidColor=#VisBackgroundFill#
X=0
Y=R

[MeterBand0]
X=#VisPaddingHorizontal#r
Y=(#VisPaddingVertical#  + #VisVerticalOffset#)r

[VisualizerIncludes]
@IncludeBandMeasures=#@#Generated\BandMeasures.inc
@IncludeBandMeters=#@#Generated\BandMeters.inc

[VisEndAnchor]
Meter=Image
X=0
Y=#VisPaddingVertical#R

[MeasureBandFactory]
Measure=Script
ScriptFile=#@#Factory\Factory.lua
IncFile=#@#Generated\BandMeasures.inc
Number=#Bands#
SectionName=%%
Option0=Measure
Value0=Plugin
Option1=Plugin
Value1=AudioLevelBeta
Option2=Parent
Value2=Audio
Option3=Type
Value3=Band
Option4=BandIdx
Value4=#*CURRENTSECTION*#
Option5=Group
Value5=Audio

[MeterBandFactory]
Measure=Script
ScriptFile=#@#Factory\Factory.lua
IncFile=#@#Generated\BandMeters.inc
Number=#Bands#
SectionName=MeterBand%%
Option0=Meter
Value0=Bar
Option1=MeasureName
Value1=%%
Option2=MeterStyle
Value2=BarStyle
