/*************************************************
// Copyright(C)
// File name:    Export
// Author:       ����
// Version:      1.0
// Date:         2017/05/11
// Description:  dll�����궨��
//	History:
*************************************************/
#ifndef MEPLOTTING_EXPORT_H
#define MEPLOTTING_EXPORT_H

#if defined (MEPLOTTING_EXPORTS)
#	define MEPLOTTING_EXPORT __declspec(dllexport)
#else 
#	define MEPLOTTING_EXPORT __declspec(dllimport)
#endif 

#endif // GEOMETRYMODEL_EXPORT_H
