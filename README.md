﻿# FFMPEGGER

![screenshot of ffmpegger skin](./preview.png)

# Features

- Uses Rainmeters native [\[Play\]](https://docs.rainmeter.net/manual/bangs/#Play) and [\[PlayStop\]](https://docs.rainmeter.net/manual/bangs/#PlayStop) commands. Yes, that means no pausing or seeking or anything.
- Converts any media to .wav and [\[Play\]](https://docs.rainmeter.net/manual/bangs/#Play)s it directly in Rainmeter.
- The visualiser uses [AudioLevelBeta](https://github.com/SnGmng/AudioLevelBeta/) and crashes Rainmeter if you refresh `ffmpegger\Play` while the About window is open and monitoring it. Otherwise it's very smooth.
- Split into three skins for no reason.
- Clashing design language.
- Plays your media in a way that other Player skins can't read metadata off of it!
- Ingests video files too. Praise ffmpeg.

# Usage

Place your media files in `ffmpegger\@Resources\Songs`.

Refresh the skin to load new media.

Scroll and select the desired media to play.

Enjoy.

# Why?

Because some guy was asking for a literal "Player skin" in the discord and it took like half an hour to explain to them that NowPlaying and WebNowPlaying skins are not literally playing the music.

# Notes

While developing this skin I noticed that if you use `[`brackets`]` in your skin folders name, Rainmeter goes absolutely bonkers when trying to write settings for it in Rainmeter.ini. So don't use `[`brackets`]` when naming your skins.

Unicode brackets like the full width brackets `［` and `］` work in Rainmeter but lua scripts that access files (like factory.lua) break with those.

![Northernlion halloween tweet](https://user-images.githubusercontent.com/93496808/213417133-2b32d931-b722-4975-b036-705ba712a33d.png)

