# ターゲット名：ソースファイル
# [Tab] コマンド
hello: INT30-C-3.c
	gcc -o hello INT30-C-3.c

# 生成ファイルの削除
clean:
	rm -f *~ hello
