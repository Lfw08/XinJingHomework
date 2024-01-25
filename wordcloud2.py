#!/usr/bin/env python
"""
Masked wordcloud
================

Using a mask you can generate wordclouds in arbitrary shapes.
"""

from os import path
from PIL import Image
import numpy as np
import matplotlib.pyplot as plt
import os
import random

from wordcloud import WordCloud, STOPWORDS

# get data directory (using getcwd() is needed to support running example in generated IPython notebook)
d = path.dirname(__file__) if "__file__" in locals() else os.getcwd()

# Read the whole text.
textname=''
for i in range(2,41):
    if(i<10):
        textname = '2026060' + str(i)
    else:
        textname = '202606' + str(i)
    if(textname=='20260601'):
        textname='"20260601"'
    text = open(path.join(d, f'/home/lfw/评价输出/{textname}.txt')).read()

    # read the mask image
    # taken from
    # http://www.stencilry.org/stencils/movies/alice%20in%20wonderland/255fk.jpg
    image=random.choice(["flower",'tree','heart'])
    alice_mask = np.array(Image.open(path.join(d, f"/home/lfw/图片/{image}.jpg")))


    wc = WordCloud(background_color="white", max_words=2000, mask=alice_mask,
                contour_width=3, contour_color='steelblue',font_path='/home/lfw/XuandongKaishu.ttf')

    # generate word cloud
    wc.font_path="/home/lfw/XuandongKaishu.ttf"
    wc.generate(text)
    

    # store to file
    wc.to_file(path.join(d, f"/home/lfw/评价词云输出/{textname}.png"))

    # show
    plt.imshow(wc, interpolation='bilinear')
    plt.axis("off")
    plt.figure()
    plt.imshow(alice_mask, cmap=plt.cm.gray, interpolation='bilinear')
    plt.axis("off")
    plt.show()