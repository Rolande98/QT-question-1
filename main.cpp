#include "sentence_processor.h"
#include<QMessageBox>
#include<QInputDialog>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    int result =0;
    QStringList input;
    do{
         do{ input = getSentence();
           if (input.at(1) == "cancel")
        }
    }
    return 0;
}
