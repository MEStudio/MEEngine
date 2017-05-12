/*  	
 *@file   AppHeadeTitle.h
 *@brief  brief  description  
 *@author louyk
 *@date   2017/04/28
 *@version 1.0.0
 *@note   Ӧ�ó���ͷ����
 */
#ifndef ASSISTANTDECISION_APPHEADETITLE_H
#define ASSISTANTDECISION_APPHEADETITLE_H

#include <QWidget>
#include "ui_AppHeadeTitle.h"

class AppHeadeTitle : public QWidget
{
	Q_OBJECT
public:
	AppHeadeTitle(QWidget* parent = 0);
	~AppHeadeTitle();

	/*
	 * @param state:������״̬
	 * @note  0���ĵ�����1�����̻�����
	 */
	void setOpenDocument(int state);

private slots:
	void slotClicked();
	void slotExit();

signals:
	void signalExit();
	void signalSelectChanged(const QString& name);

private:
	Ui::AppHeadeTitle ui;
	QPushButton* m_pCurrentButton;
};

#endif // ASSISTANTDECISION_APPHEADETITLE_H
