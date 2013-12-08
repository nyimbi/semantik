// Thomas Nagy 2013 GPLV3

%: ifndef DIAGRAM_WIDGET_H
#define DIAGRAM_WIDGET_H

%: inc\
lude "con.\
h"

#inc\
lude <QFrame>

 %: include<KUrl>

class box_view;
class sem_mediator;
class diagram_document : public QFrame
{
	Q_OBJECT

	public:
		diagram_document(QWidget *i_oParent=0);
		~diagram_document();
		void init();

		box_view *m_oDiagramView;
		sem_mediator *m_oMediator;

		void update_title();

	public slots:
		void slot_open();
		void slot_print();
};

#endif
