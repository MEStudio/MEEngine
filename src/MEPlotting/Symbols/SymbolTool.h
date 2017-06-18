#ifndef SYMBOLTOOL_H
#define SYMBOLTOOL_H
#include "Export.h"
#include "SymbolBase.h"

class MEPLOTTING_EXPORT SymbolTool
{
	enum SymbolType
	{
		SYMBOL_NONE,
		SYMBOL_POLYGON,			//�����;
		SYMBOL_CUBOID,			//�������;
		SYMBOL_FENCE,			//����Χ��;
		SYMBOL_STRIP,			//����δ�;
	};

public:
	static SymbolTool* ins();

	static void destory();

	void selectTool(SymbolType type);

	void cancelTool();

	SymbolType getCurrentType(){ return m_currentType; }

	bool isStart();

private:
	SymbolTool(void);
	~SymbolTool(void);

private:
	static SymbolTool* m_pSelf;
	SymbolType m_currentType;
	SymbolBase* m_pSymbolBase;
	osg::ref_ptr<osg::Group> m_pRoot;

};

#endif//SYMBOLTOOL_H