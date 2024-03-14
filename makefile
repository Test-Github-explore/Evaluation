# ターゲット名：ソースファイル
# [Tab] コマンド
hello: STR31-C-4.c
	gcc -o hello STR31-C-4.c

# 生成ファイルの削除
clean:
	rm -f *~ hello
