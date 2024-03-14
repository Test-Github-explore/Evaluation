# ターゲット名：ソースファイル
# [Tab] コマンド
hello: INT32-C-1.c
	gcc -o hello INT32-C-1.c

# 生成ファイルの削除
clean:
	rm -f *~ hello
