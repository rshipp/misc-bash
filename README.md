This is just a small collection of bash scripts I find useful. Use them or not, in whatever way you wish.

##Descriptions: 

#bundle 
My version of the traditional 'bundle' shell script, similar to GNU 'shar'. Includes built-in file integrity checking; can use tar, xz, gzip, etc; creates a plain-text, self-extracting shell script 'archive' that can be used to transport files of any type; and more. See README.bundle.

#countdown
A simple 'for' loop that counts down in seconds from any numerical value specified as an argument to the script.

#iextract
Download and extract archives of almost any type, including tarballs, zips, etc.

#thinkgeek_fortunes
A silly script that pulls fortunes from the ThinkGeek fortunes page, and creates a 'fortune' database out of them. Requires the 'convmv', 'hd2u', and 'fortune-mod' packages. 

#rb
A simple but ever-so-useful 1-liner that deletes files with the '~' backup extension used by Kate and Kwrite.

#recycle, saferm, and unrm
These three scripts work together to make deleting files from the CLI a little safer. After one too many accidental rm's on my part, I decided to make these. 

#s
Run apps like kate, dolphin, etc that make a lot of noise and do not detatch from the shell with: 's someprogram --options'

#writelog
A 2-second script that makes it a little easier to see what files a process opens and/or writes to. Requires 'strace'.
