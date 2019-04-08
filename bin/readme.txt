test ffmpeg commands

ffmpeg.exe -loop 1 -r 60 -f image2 -i hd.png -i grig.mp3 -s 1920x1080 -vcodec libx264 -crf 25 -t 14 -pix_fmt yuv420p hd_test.mp4


ffmpeg.exe -i hd_test.ts -i ueit.ts -map 0:0 -map 0:1 -map 1:0 -program program_num=1:title=HdTest:st=0:st=1 -program program_num=2:title=Ueit:st=2:st=3 -f mpegts out.ts

