/*************************************************
// Copyright(C)
// File name:    Export
// Author:       ����
// Version:      1.0
// Date:         2017/05/11
// Description:  dll�����궨��
//	History:
*************************************************/
#ifndef RIGELMODEL_EXPORT_H
#define RIGELMODEL_EXPORT_H

#if defined (RIGELMODEL)
#	define DLL_EXPORT __declspec(dllexport)
#else 
#	define DLL_EXPORT __declspec(dllimport)
#endif 

#endif // GEOMETRYMODEL_EXPORT_H
