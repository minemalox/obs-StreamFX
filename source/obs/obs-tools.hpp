/*
 * Modern effects for a modern Streamer
 * Copyright (C) 2018 Michael Fabian Dirks
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
 */

#pragma once
#include "common.hpp"
#include "obs-source.hpp"

namespace streamfx::obs {
	namespace tools {
		bool source_find_source(::streamfx::obs::source haystack, ::streamfx::obs::source needle);
	} // namespace tools

	inline void obs_source_deleter(obs_source_t* v)
	{
		obs_source_release(v);
	}

	inline void obs_weak_source_deleter(obs_weak_source_t* v)
	{
		obs_weak_source_release(v);
	}

	inline void obs_scene_deleter(obs_scene_t* v)
	{
		obs_scene_release(v);
	}

	inline void obs_sceneitem_releaser(obs_scene_item* v)
	{
		obs_sceneitem_release(v);
	}

	inline void obs_sceneitem_remover(obs_scene_item* v)
	{
		obs_sceneitem_remove(v);
	}

	inline void obs_data_deleter(obs_data_t* v)
	{
		obs_data_release(v);
	}
} // namespace streamfx::obs
