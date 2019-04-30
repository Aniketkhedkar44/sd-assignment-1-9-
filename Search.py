import sys
from PyQt5 import QtWidgets
from PyQt5 import QtGui,QtCore
import Search_Data


class Window(Search_Data.Ui_Search_Data,QtWidgets.QMainWindow):
    def __init__(self):
        super(Window,self).__init__()
        self.setupUi(self)
        self.Search.clicked.connect(self.search)
    def search(self):
        self.ID=self.idle.text()
        file1=open(self.ID+'.txt')
        if file1:
            self.Name =file1.readline()
            self.Dept = file1.readline()
            self.Phone = file1.readline()
            self.Des = file1.readline()
            self.name.setText(self.Name)
            self.dept.setText(self.Dept)
            self.phone.setText(self.Phone)
            self.designation.setText(self.Des)
app=QtWidgets.QApplication(sys.argv)
GUI=Window()
GUI.show()
sys.exit(app.exec_())

