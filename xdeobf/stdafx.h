#pragma once

#define USE_DANGEROUS_FUNCTIONS
#pragma warning(push)
#pragma warning(disable:4244)
#pragma warning(disable:4267)
#include <ida.hpp>
#include <hexrays.hpp>
#pragma warning(pop)

#include <set>
#include <map>
#include <queue>

#include "Config.h"

#if VERBOSE
#define dbg msg
#else
#define dbg
#endif

#include "Util.h"
#include "GraphUtil.h"
#include "InsnMatcher.h"
#include "InsnOptimizer.h"
#include "Unflattener.h"
