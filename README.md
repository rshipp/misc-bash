A small collection of bash scripts I find useful.

Descriptions: 
#bundle 
My version of the traditional 'bundle' shell script, similar to GNU 'shar'. Includes built-in file integrity checking; can use tar, xz, gzip, etc; creates a plain-text shell script 'archive' that can be used to transport files of any type, and more. 

#countdown
A simple 'for' loop that counts down from any numerical value specified as an argument to the script.

#iextract
Download and extract archives of almost any type, including tarballs, zips, etc.

#rb
A simple but ever-so-useful 1-liner that deletes files with the '~' backup extension used by Kate and Kwrite.

#recycle, rm, and unrm
These three scripts work together to make deleting files from the CLI a little safer. After one too many accidental rm's on my part, I decided to make these. 

#s
Run apps like kate, dolphin, etc that make a lot of noise and do not detatch from the shell with: 's someprogram --options'

#writelog
A 2-second script that makes it a little easier to see what files a process opens and/or writes to. Requires 'strace'.
