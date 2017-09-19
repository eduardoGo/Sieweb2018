#include <CUnit/CUnit.h>
#include "binary_tree.h"

void test(void)
{
	binary_tree *bt = create_empty_binary_tree();
	CU_ASSERT( bt == NULL );
}