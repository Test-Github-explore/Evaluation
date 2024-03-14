# ターゲット名：ソースファイル
# [Tab] コマンド
hello: MEM32-C-1.c
	gcc -o hello MEM32-C-1.c

# 生成ファイルの削除
clean:
	rm -f *~ hello
