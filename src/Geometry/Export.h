/*************************************************
// Copyright(C)
// File name:    Export
// Author:       ����
// Version:      1.0
// Date:         2017/05/11
// Description:  dll�����궨��
//	History:
*************************************************/
#ifndef GEOMETRYMODEL_EXPORT_H
#define GEOMETRYMODEL_EXPORT_H

#if defined (GEOMETRYMODEL_EXPORTS)
#	define GEOMETRYMODEL_EXPORT __declspec(dllexport)
#else 
#	define GEOMETRYMODEL_EXPORT __declspec(dllimport)
#endif 

#endif // GEOMETRYMODEL_EXPORT_H
