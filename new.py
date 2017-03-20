#!/usr/bin/env python

import pygtk
pygtk.require('2.0')
import gtk

class MyProgram:
   
    def __init__(self):
        app_window = gtk.Window(gtk.WINDOW_TOPLEVEL)
        app_window.set_size_request(700, 550)
        app_window.set_border_width(20)
        app_window.set_title("Warning!!")
        app_window.connect("delete_event", lambda w,e: gtk.main_quit())
        # Program goes here  ...
        app_window.show()
        return

def main():
    gtk.main()
    return 0

if __name__ == "__main__":
    MyProgram()
    main()

