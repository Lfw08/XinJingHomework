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


# Read the whole text.
textname=''
for i in range(1,42):
    if(i<10):
        textname = '2026060' + str(i)
    else:
        textname = '202606' + str(i)
    text = open(f'{textname}.txt',"r",encoding = 'utf-8',).read()

    # read the mask image
    # taken from
    # http://www.stencilry.org/stencils/movies/alice%20in%20wonderland/255fk.jpg
    image=random.choice(['heart','flower'])
    alice_mask = np.array(Image.open(f"{image}.jpg","r"),)

    stopwords = set(STOPWORDS)
    stopwords.add("said")

    wc = WordCloud(background_color="#FF6666", max_words=200, mask=alice_mask,
                font_path="ZhuqueFangsong.ttf",contour_color="#FFFFFF",contour_width=15)

    # generate word cloud
    wc.generate(text)
    

    # store to file
    
    open(f"D:{'textname.png'}","w")
    wc.to_file(f"{textname}.png",)
    print(f"{textname} is completed.")

    