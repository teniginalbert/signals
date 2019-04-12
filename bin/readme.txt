test ffmpeg commands

ffmpeg.exe -loop 1 -r 60 -f image2 -i hd.png -i grig.mp3 -s 1920x1080 -vcodec libx264 -crf 25 -t 14 -pix_fmt yuv420p hd_test.mp4


ffmpeg.exe -i hd_test.ts -i ueit.ts -map 0:0 -map 0:1 -map 1:0 -program program_num=1:title=HdTest:st=0:st=1 -program program_num=2:title=Ueit:st=2:st=3 -f mpegts out.ts


ffmpeg.exe -i it.mp4 -codec:v copy -codec:a copy -streamid 0:50 -streamid 1:52 -bsf h264_mp4toannexb -f mpegts out_with_pids.ts


ffmpeg.exe -loop 1 -f image2 -i it.png -f mp3 -i grig.mp3 -codec:v h264 -codec:a aac -s 1920x1080 -t 14 -crf 30 -r 60 -pix_fmt yuv420p it.264

ffmpeg.exe -t it.264 -codec:v copy -codec:a copy -s 1920x1080 -t 14 -crf 30 -r 60 -pix_fmt yuv420p it.mp4

ffmpeg.exe -stream_loop -1 -i it.mp4 -codec:v copy -codec:a copy -streamid 0:50 -streamid 1:52 -bsf:v h264_mp4toannexb -s 1920x1080 -r 60 -t 14 -crf 30 -f mpegts out_with_pids.ts

(-fflags +genpts)?

ffmpeg.exe -loop 1 -f image2 -i images\image%03d.png -c:v libx264 -s 1920x1080 -crf 30 -t 20 -vf "fps=60, format=yuv420p" out_clock.mp4


-r 1/5 means 1 frame in 5 seconds, -r 2 means 2 frame in a second

-crf is a quality from 0 to 32 (?)

-s is a size

-t time

-codec:v == -vcodec
-codec:a == -acodec

-f is a type of input/output file (mpegts, image2, etc.)

-pix_fmt pixel format

-streamid pid

-loop cycling an image

-stream_loop cycling a stream

-bsf bitstream filter

-fflags +genpts generates points for streams, dont understand it myself