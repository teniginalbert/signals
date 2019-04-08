test ffmpeg commands

ffmpeg.exe -loop 1 -r 60 -f image2 -i hd.png -i grig.mp3 -s 1920x1080 -vcodec libx264 -crf 25 -t 14 -pix_fmt yuv420p hd_test.mp4