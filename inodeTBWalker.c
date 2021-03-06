#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#include "spinlock.h"
#include "sleeplock.h"
#include "buf.h"

#include "file.h" //Ju-Ju added

int main(int argc, char *argv[]) {
  // int inum;
  // struct buf *bp;
  // struct dinode *dip;
  // struct superblock sb = {0};

  // bp = bread(1, 1);
  // printf(1,"%p",bp->data);
  // memmove(&sb, bp->data, sizeof(sb));
  // printf(1,"Started");
  // brelse(bp);

  // // int table[sb.ninodes];
  // for(inum = 1; inum < sb.ninodes; inum++) {
  //   bp = bread(1, IBLOCK(inum, sb));
  //   dip = (struct dinode*)bp->data + inum%IPB;
  //   if(dip->type == 0) {
  //     printf(1,"inode %d is free\n", inum);
  //     // table[inum] = 0;
  //   }
  //   else {
  //     printf(1,"inode %d is alloced\n", inum);
  //     // table[inum] = 1;
  //   }
  //   brelse(bp);
  // }
	
  // struct dinode *dip = {0};
	// getINode(1, 3, dip);
	// printf(1, "Exit\n");
  
  // Ju-Ju attempt
  // for(inum = 1; inum < sb.ninodes; inum++) {
  //   // bp = bread(1, IBLOCK(inum, sb));
  //   dip = iget(1,inum);
  //   ilock(dip);
  //   if(dip->type == 0) {
  //     printf(1,"inode %d is free\n", inum);
  //     // table[inum] = 0;
  //   }
  //   else {
  //     printf(1,"inode %d is alloced\n", inum);
  //     // table[inum] = 1;
  //   }
  //   iunlock(dip);
  //   iput(dip);
  //   // brelse(bp);
  // }

  struct inode fetchedINode = {0};
  // fetchedINode= JuJu_inodeTBWalker(1,1); // need syscall
  getINode(1,1,&fetchedINode);
  // printf(1,"hello");
  printf(1,"%d",fetchedINode.size);
  exit();
}

