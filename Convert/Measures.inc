[MeasureRandomEndValue]
Measure=Calc
Formula=Random
LowBound=(#MinTime# / 62)
HighBound=(#MaxTime# / 62)

[MeasureProgress]
Measure=Loop
StartValue=0
EndValue=[MeasureRandomEndValue]
LoopCount=1
DynamicVariables=1
IfCondition=MeasureProgress = MeasureRandomEndValue && #Conversion# = 1
IfTrueAction=#ConvertFinishAction#

[MeasureProgressPercentage]
Measure=Calc
Formula=((MeasureProgress - MeasureRandomEndValue * 0.01) / MeasureRandomEndValue) * 0.99
; Formula=0.55
MinValue=0
MaxValue=1
OnChangeAction=[!UpdateMeterGroup MeterProgress][!Redraw]
