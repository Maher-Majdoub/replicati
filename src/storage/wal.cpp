#include "wal.hpp"

#include <string>
#include <vector>

namespace replicati {

Wal::Wal(): last_index_(0) {}

void Wal::append(const std::string& key, const std::string& value) {
  this->entries_.push_back(LogEntry(this->last_index_++, key, value));
}

std::vector<LogEntry> Wal::get_from(uint64_t index) {
  return {};
}

}