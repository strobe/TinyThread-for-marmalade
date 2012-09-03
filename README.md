# This package is a port of TinyThread++ to the Marmalade SDK.
Original project home page is: http://tinythread.sourceforge.net/

Add TinyThread to your project as a subproject by modifying your project mkb file:

    subprojects
    {
        (libs)
        # path to tinythread.mkf
        tinythread-for-marmalade/tinythread
    }
    
    
## note:
I found few big issues with threads on marmalade 5.0-6.0 on the iOs devices (with pthreads and marmalade threads).
Therefore I guess that this library can't work correctly on iOs until bugs with threads will be fixed by marmalade team.

Currently I don't have marmalade license therefore I not able to watching to situation around threads bugs.