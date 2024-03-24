# a python script to automatically modify the seats
# instead of doing so manually.

from docx import Document

#input the date of original file
date1=input("Please enter the original date")

# Open Word Document
doc = Document(f'高一6班座位表{date1}.docx')

# 获取文档中的第一个表格
table = doc.tables[0]

# 遍历表格中的所有行
for row in table.rows:
    # 遍历行中的所有单元格
    for cell in row.cells:
        # 读取单元格中的文本
        print(cell.text)
        # 修改单元格中的文本
        cell.text = "新的文本内容"

# 保存修改后的文档
doc.save('path_to_modified_document.docx')