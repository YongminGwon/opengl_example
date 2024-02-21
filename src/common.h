#ifndef __COMMON_H__
#define __COMMON_H__

#include <memory>
#include <string>
#include <string>
#include <optional>
#include <glad/glad.h>
#include <glfw/glfw3.h>
#include <spdlog/spdlog.h>

#define CLASS_PTR(klassName) \
class klassName; \
using klassName ## UPtr = std::unique_ptr<klassName>; \
using klassName ## Ptr = std::shared_ptr<klassName>; \
using klassName ## WPtr = std::weak_ptr<klassName>;

// optional은 값이 들어있으면 쓸 수 있고 없으면 안쓰는것
std::optional<std::string> LoadTextFile(const std::string& filename);

#endif //__COMMON_H__