import csv
with open ('/home/lfw/评价.csv','r')as MyFile:
    lines=csv.reader(MyFile)
    for line in lines:
        with open (f'/home/lfw/评价输出/{str(line[0])}.txt',"w") as File:
            for a in line:
                if(a!=line[0]):
                    if(a!=line[1]):
                        File.write(a+'\n')
