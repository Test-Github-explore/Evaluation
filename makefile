# ターゲット名：ソースファイル
# [Tab] コマンド
hello: ENV33-C-2.c
	gcc -o hello ENV33-C-2.c

# 生成ファイルの削除
clean:
	rm -f *~ hello
