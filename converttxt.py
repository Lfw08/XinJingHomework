import csv
with open ('D:\\input.csv','r',encoding = 'utf-8')as MyFile:
    lines=csv.reader(MyFile)
    for line in lines:
        with open (f'D:\\评价输出\\{str(line[0])}.txt',"w",encoding = 'utf-8') as File:
            for a in line:
                if(a!=line[0]):
                    if(a!=line[1]):
                        File.write(a+'\n')
