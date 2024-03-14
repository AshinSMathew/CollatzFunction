import os
path ='C:\\Users\\HP\\Desktop\\{Folder}'
os.chdir(path)
for i in range(1,73):
    NewFolder='CY-'+str(i)
    os.makedirs(NewFolder)
