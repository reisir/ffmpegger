# Locations
$resources = $RmApi.VariableStr("@")
$variablesFile = "$($resources)Variables.inc"
$songsDir = "$($resources)Songs\"

# Files
$outputFilePath = "$($resources)play.wav"

# Known values
$self = $RmApi.VariableStr("ROOTCONFIG")
# $convertAction = $RmApi.VariableStr("ConvertAction")

function Update {
    return $songsDir
}

function Convert {

    param(
        # File to convert
        [Parameter(Position = 0)]
        [string]
        $measureName = "Darude - Sandstorm.mp3"
    )

    $songName = $RmApi.MeasureStr($measureName)
    $songPath = "$songsDir$songName"

    ffmpeg.exe -y -i "$songPath" $outputFilePath

    # $RmApi.Bang("[!WriteKeyValue Variables CurrentSong `"$songName`" `"$variablesFile`"][!DeactivateConfig]")
    $RmApi.Bang("[!WriteKeyValue Variables CurrentSong `"$songName`" `"$variablesFile`"]")

    $RmApi.Bang("[!SetVariable Conversion 1 `"$self\Convert`"]")

}
