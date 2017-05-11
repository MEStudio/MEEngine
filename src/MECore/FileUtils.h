/************************************************************ 
  Copyright (C), 2014-2017, SSIT Tech. Co., Ltd. 
  �ļ���: FileUtils.h
  ����: lyk
  �汾: V1.0.0
  ����: 2016/09/23
  ģ������:��ȡ·���ӿ�
  ��Ҫ�������书��:
  ��ʷ�޸ļ�¼:
***********************************************************/
#ifndef FILEUTILS_H
#define FILEUTILS_H

#include <QString>
#include "Export.h"

////////////////////////////////////////////////
// ʹ�÷�ʽΪ��main��������ڴ�������init,
// ����Ŀ¼��Ϊ��Ŀ¼��֮���ȡ��Ŀ¼���Դ�Ϊ��Ŀ¼
// FileUtils::ins()->init("D:/project/");
////////////////////////////////////////////////
class MECORE_EXPORT FileUtils
{
public:
	static FileUtils* ins();
	static void des();

	void init(const QString& name);
	QString getPath(const QString& name);

private:
	FileUtils();
	~FileUtils();

private:
	static FileUtils* m_pIns;
	QString m_strRoot;
};

#endif // FILEUTILS_H
