# ターゲット名：ソースファイル
# [Tab] コマンド
hello: INT35-C.c
	gcc -o hello INT35-C.c

# 生成ファイルの削除
clean:
	rm -f *~ hello
