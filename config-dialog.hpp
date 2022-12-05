#pragma once

#include <QCheckBox>
#include <QComboBox>
#include <QDialog>
#include <QMainWindow>
#include <qtextedit.h>

class CanvasConfigDialog : public QDialog {
	Q_OBJECT

	QCheckBox *replayBuffer;
	QComboBox *server;
	QLineEdit * key;

	friend class CanvasDock;

public:
	CanvasConfigDialog(QMainWindow *parent = nullptr);
	~CanvasConfigDialog();
public slots:
};
