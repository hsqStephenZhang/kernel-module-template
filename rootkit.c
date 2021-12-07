#include <linux/init.h>
#include <linux/module.h>
#include "rootkit.h"

static int rootkit_init(void)
{
    return 0;
}

static void rootkit_exit(void)
{

}

module_init(rootkit_init);
module_exit(rootkit_exit);
