/***************************************************************************
 * 
 * Copyright (c) 2010 babeltime.com, Inc. All Rights Reserved
 * $Id$
 * 
 **************************************************************************/

/**
 * @file $HeadURL$
 * @author $Author$(hoping@babeltime.com)
 * @date $Date$
 * @version $Revision$
 * @brief 
 *  
 **/

#ifndef QUERYUTIL_H_
#define QUERYUTIL_H_

#include <gumbo.h>
#include <string>
#include <vector>

class CQueryUtil
{
	public:

		static std::string tolower(std::string s);

		static std::vector<GumboNode*> unionNodes(std::vector<GumboNode*> aNodes1,
				std::vector<GumboNode*> aNode2);

		static bool nodeExists(std::vector<GumboNode*> aNodes, GumboNode* apNode);

};

#endif /* QUERYUTIL_H_ */

/* vim: set ts=4 sw=4 sts=4 tw=100 noet: */
