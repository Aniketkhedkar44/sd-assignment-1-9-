import sys
from PyQt5 import QtWidgets
from PyQt5 import QtGui,QtCore
import Employee
import Login

class Window1(Login.Ui_Password_Window, QtWidgets.QDialog):
    def __init__(self):
        super(Window1, self).__init__()
        self.setupUi(self)
        self.pushButton.clicked.connect(self.login)

    def login(self):
        if self.lineEdit.text()=='archis':
            self.accept()



class Window(Employee.Ui_Data_Entry,QtWidgets.QMainWindow):
    def __init__(self):
        super(Window,self).__init__()
        self.setupUi(self)
        self.Clear_pb.clicked.connect(self.clear)
        self.Submit_pb.clicked.connect(self.input)


    def input(self):
        self.Name=self.Name_le.text()
        self.Dept = self.Dept_le.text()
        self.ID = self.ID_le.text()
        self.Phone = self.Phone_le.text()
        self.Des = self.Des_le.text()
        self.save()

    def clear(self):
        self.Name_le.clear()
        self.Dept_le.clear()
        self.ID_le.clear()
        self.Phone_le.clear()
        self.Des_le.clear()
    def save(self):
        file=open(self.ID+'.txt','a')
        file.write(self.Name+'\n')
        file.write(self.Dept + '\n')
        file.write(self.Phone + '\n')
        file.write(self.Des + '\n')
        file.write(self.ID + '\n')
        file.close()
app=QtWidgets.QApplication(sys.argv)
login=Window1()
if login.exec_()== QtWidgets.QDialog.Accepted:
    GUI=Window()
    GUI.show()
    sys.exit(app.exec_())

