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
import tqdm

from wordcloud import WordCloud, STOPWORDS

tqdm.tqdm.bar_format = 'rich'
# Read the whole text.
textname=''
for i in tqdm.tqdm(range(1,42)):
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


    wc = WordCloud(background_color="#FF6666", max_words=2000, mask=alice_mask,
                font_path="ZhuqueFangsong.ttf",contour_color="#FFFFFF",contour_width=15,
                width=4096,height=4096,scale=5)

    # generate word cloud
    wc.generate(text)
    plt.open(wc)
    plt.axis("off")
    plt.show()

    # store to file
    
    open(f"D:{'textname.png'}","w")
    wc.to_file(f"{textname}.png",)

    