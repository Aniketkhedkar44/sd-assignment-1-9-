# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'Login.ui'
#
# Created by: PyQt5 UI code generator 5.11.3
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_Password_Window(object):
    def setupUi(self, Password_Window):
        Password_Window.setObjectName("Password_Window")
        Password_Window.resize(400, 300)
        Password_Window.setStyleSheet("background-color: rgb(190, 236, 255);")
        self.frame = QtWidgets.QFrame(Password_Window)
        self.frame.setGeometry(QtCore.QRect(0, 60, 401, 201))
        self.frame.setStyleSheet("background-color: rgb(255, 255, 255);")
        self.frame.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.frame.setFrameShadow(QtWidgets.QFrame.Raised)
        self.frame.setObjectName("frame")
        self.pushButton = QtWidgets.QPushButton(self.frame)
        self.pushButton.setGeometry(QtCore.QRect(120, 140, 131, 41))
        self.pushButton.setStyleSheet("background-color: rgb(225, 225, 225);")
        self.pushButton.setDefault(True)
        self.pushButton.setFlat(True)
        self.pushButton.setObjectName("pushButton")
        self.label = QtWidgets.QLabel(self.frame)
        self.label.setGeometry(QtCore.QRect(20, 40, 121, 41))
        font = QtGui.QFont()
        font.setPointSize(12)
        self.label.setFont(font)
        self.label.setStyleSheet("background-color: rgb(225, 225, 225);")
        self.label.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.label.setAlignment(QtCore.Qt.AlignCenter)
        self.label.setObjectName("label")
        self.lineEdit = QtWidgets.QLineEdit(self.frame)
        self.lineEdit.setGeometry(QtCore.QRect(170, 40, 211, 41))
        self.lineEdit.setStyleSheet("background-color: rgb(225, 225, 225);")
        self.lineEdit.setEchoMode(QtWidgets.QLineEdit.Password)
        self.lineEdit.setObjectName("lineEdit")

        self.retranslateUi(Password_Window)
        QtCore.QMetaObject.connectSlotsByName(Password_Window)

    def retranslateUi(self, Password_Window):
        _translate = QtCore.QCoreApplication.translate
        Password_Window.setWindowTitle(_translate("Password_Window", "Dialog"))
        self.pushButton.setText(_translate("Password_Window", "Login"))
        self.label.setText(_translate("Password_Window", "Password"))

