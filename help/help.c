/**
 * @file
 * Help system
 *
 * @authors
 * Copyright (C) 2018 Richard Russon <rich@flatcap.org>
 *
 * @copyright
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 2 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stddef.h>
#include <stdbool.h>
#include "mutt/mutt.h"
#include "mx.h"

struct Context;
struct Header;
struct Message;

static int help_open(struct Context *ctx)
{
  mutt_debug(1, "entering help_open\n");
  return -1;
}

static int help_open_append(struct Context *ctx, int flags)
{
  mutt_debug(1, "entering help_open_append\n");
  return -1;
}

static int help_close(struct Context *ctx)
{
  mutt_debug(1, "entering help_close\n");
  return -1;
}

static int help_check(struct Context *ctx, int *index_hint)
{
  mutt_debug(1, "entering help_check\n");
  return -1;
}

static int help_sync(struct Context *ctx, int *index_hint)
{
  mutt_debug(1, "entering help_sync\n");
  return -1;
}

static int help_open_msg(struct Context *ctx, struct Message *msg, int msgno)
{
  mutt_debug(1, "entering help_open_msg\n");
  return -1;
}

static int help_close_msg(struct Context *ctx, struct Message *msg)
{
  mutt_debug(1, "entering help_close_msg\n");
  return -1;
}

static int help_commit_msg(struct Context *ctx, struct Message *msg)
{
  mutt_debug(1, "entering help_commit_msg\n");
  return -1;
}

static int help_open_new_msg(struct Message *msg, struct Context *ctx, struct Header *hdr)
{
  mutt_debug(1, "entering help_open_new_msg\n");
  return -1;
}

static int help_edit_msg_tags(struct Context *ctx, const char *tags, char *buf, size_t buflen)
{
  mutt_debug(1, "entering help_edit_msg_tags\n");
  return -1;
}

static int help_commit_msg_tags(struct Context *msg, struct Header *hdr, char *buf)
{
  mutt_debug(1, "entering help_commit_msg_tags\n");
  return -1;
}

/**
 * mx_help_ops - Help Mailbox callback functions
 */
struct MxOps mx_help_ops = {
  .open            = help_open,
  .open_append     = help_open_append,
  .close           = help_close,
  .check           = help_check,
  .sync            = help_sync,
  .open_msg        = help_open_msg,
  .close_msg       = help_close_msg,
  .commit_msg      = help_commit_msg,
  .open_new_msg    = help_open_new_msg,
  .edit_msg_tags   = help_edit_msg_tags,
  .commit_msg_tags = help_commit_msg_tags,
};

