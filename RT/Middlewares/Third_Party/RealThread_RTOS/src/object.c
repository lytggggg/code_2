??/ *  
   *   C o p y r i g h t   ( c )   2 0 0 6 - 2 0 2 1 ,   R T - T h r e a d   D e v e l o p m e n t   T e a m  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   C h a n g e   L o g s :  
   *   D a t e                       A u t h o r               N o t e s  
   *   2 0 0 6 - 0 3 - 1 4           B e r n a r d             t h e   f i r s t   v e r s i o n  
   *   2 0 0 6 - 0 4 - 2 1           B e r n a r d             c h a n g e   t h e   s c h e d u l e r   l o c k   t o   i n t e r r u p t   l o c k  
   *   2 0 0 6 - 0 5 - 1 8           B e r n a r d             f i x   t h e   o b j e c t   i n i t   b u g  
   *   2 0 0 6 - 0 8 - 0 3           B e r n a r d             a d d   h o o k   s u p p o r t  
   *   2 0 0 7 - 0 1 - 2 8           B e r n a r d             r e n a m e   R T _ O B J E C T _ C l a s s _ S t a t i c   t o   R T _ O b j e c t _ C l a s s _ S t a t i c  
   *   2 0 1 0 - 1 0 - 2 6           y i . q i u               a d d   m o d u l e   s u p p o r t   i n   r t _ o b j e c t _ a l l o c a t e   a n d   r t _ o b j e c t _ f r e e  
   *   2 0 1 7 - 1 2 - 1 0           B e r n a r d             A d d   o b j e c t _ i n f o   e n u m .  
   *   2 0 1 8 - 0 1 - 2 5           B e r n a r d             F i x   t h e   o b j e c t   f i n d   i s s u e   w h e n   e n a b l e   M O D U L E .  
   * /  
  
 # i n c l u d e   < r t t h r e a d . h >  
 # i n c l u d e   < r t h w . h >  
  
 / *  
   *   d e f i n e   o b j e c t _ i n f o   f o r   t h e   n u m b e r   o f   r t _ o b j e c t _ c o n t a i n e r   i t e m s .  
   * /  
 e n u m   r t _ o b j e c t _ i n f o _ t y p e  
 {  
         R T _ O b j e c t _ I n f o _ T h r e a d   =   0 ,                                                   / * * <   T h e   o b j e c t   i s   a   t h r e a d .   * /  
 # i f d e f   R T _ U S I N G _ S E M A P H O R E  
         R T _ O b j e c t _ I n f o _ S e m a p h o r e ,                                                     / * * <   T h e   o b j e c t   i s   a   s e m a p h o r e .   * /  
 # e n d i f  
 # i f d e f   R T _ U S I N G _ M U T E X  
         R T _ O b j e c t _ I n f o _ M u t e x ,                                                             / * * <   T h e   o b j e c t   i s   a   m u t e x .   * /  
 # e n d i f  
 # i f d e f   R T _ U S I N G _ E V E N T  
         R T _ O b j e c t _ I n f o _ E v e n t ,                                                             / * * <   T h e   o b j e c t   i s   a   e v e n t .   * /  
 # e n d i f  
 # i f d e f   R T _ U S I N G _ M A I L B O X  
         R T _ O b j e c t _ I n f o _ M a i l B o x ,                                                         / * * <   T h e   o b j e c t   i s   a   m a i l   b o x .   * /  
 # e n d i f  
 # i f d e f   R T _ U S I N G _ M E S S A G E Q U E U E  
         R T _ O b j e c t _ I n f o _ M e s s a g e Q u e u e ,                                               / * * <   T h e   o b j e c t   i s   a   m e s s a g e   q u e u e .   * /  
 # e n d i f  
 # i f d e f   R T _ U S I N G _ M E M H E A P  
         R T _ O b j e c t _ I n f o _ M e m H e a p ,                                                         / * * <   T h e   o b j e c t   i s   a   m e m o r y   h e a p   * /  
 # e n d i f  
 # i f d e f   R T _ U S I N G _ M E M P O O L  
         R T _ O b j e c t _ I n f o _ M e m P o o l ,                                                         / * * <   T h e   o b j e c t   i s   a   m e m o r y   p o o l .   * /  
 # e n d i f  
 # i f d e f   R T _ U S I N G _ D E V I C E  
         R T _ O b j e c t _ I n f o _ D e v i c e ,                                                           / * * <   T h e   o b j e c t   i s   a   d e v i c e   * /  
 # e n d i f  
         R T _ O b j e c t _ I n f o _ T i m e r ,                                                             / * * <   T h e   o b j e c t   i s   a   t i m e r .   * /  
         R T _ O b j e c t _ I n f o _ U n k n o w n ,                                                         / * * <   T h e   o b j e c t   i s   u n k n o w n .   * /  
 } ;  
  
 # d e f i n e   _ O B J _ C O N T A I N E R _ L I S T _ I N I T ( c )           \  
         { & ( r t _ o b j e c t _ c o n t a i n e r [ c ] . o b j e c t _ l i s t ) ,   & ( r t _ o b j e c t _ c o n t a i n e r [ c ] . o b j e c t _ l i s t ) }  
 s t a t i c   s t r u c t   r t _ o b j e c t _ i n f o r m a t i o n   r t _ o b j e c t _ c o n t a i n e r [ R T _ O b j e c t _ I n f o _ U n k n o w n ]   =  
 {  
         / *   i n i t i a l i z e   o b j e c t   c o n t a i n e r   -   t h r e a d   * /  
         { R T _ O b j e c t _ C l a s s _ T h r e a d ,   _ O B J _ C O N T A I N E R _ L I S T _ I N I T ( R T _ O b j e c t _ I n f o _ T h r e a d ) ,   s i z e o f ( s t r u c t   r t _ t h r e a d ) } ,  
 # i f d e f   R T _ U S I N G _ S E M A P H O R E  
         / *   i n i t i a l i z e   o b j e c t   c o n t a i n e r   -   s e m a p h o r e   * /  
         { R T _ O b j e c t _ C l a s s _ S e m a p h o r e ,   _ O B J _ C O N T A I N E R _ L I S T _ I N I T ( R T _ O b j e c t _ I n f o _ S e m a p h o r e ) ,   s i z e o f ( s t r u c t   r t _ s e m a p h o r e ) } ,  
 # e n d i f  
 # i f d e f   R T _ U S I N G _ M U T E X  
         / *   i n i t i a l i z e   o b j e c t   c o n t a i n e r   -   m u t e x   * /  
         { R T _ O b j e c t _ C l a s s _ M u t e x ,   _ O B J _ C O N T A I N E R _ L I S T _ I N I T ( R T _ O b j e c t _ I n f o _ M u t e x ) ,   s i z e o f ( s t r u c t   r t _ m u t e x ) } ,  
 # e n d i f  
 # i f d e f   R T _ U S I N G _ E V E N T  
         / *   i n i t i a l i z e   o b j e c t   c o n t a i n e r   -   e v e n t   * /  
         { R T _ O b j e c t _ C l a s s _ E v e n t ,   _ O B J _ C O N T A I N E R _ L I S T _ I N I T ( R T _ O b j e c t _ I n f o _ E v e n t ) ,   s i z e o f ( s t r u c t   r t _ e v e n t ) } ,  
 # e n d i f  
 # i f d e f   R T _ U S I N G _ M A I L B O X  
         / *   i n i t i a l i z e   o b j e c t   c o n t a i n e r   -   m a i l b o x   * /  
         { R T _ O b j e c t _ C l a s s _ M a i l B o x ,   _ O B J _ C O N T A I N E R _ L I S T _ I N I T ( R T _ O b j e c t _ I n f o _ M a i l B o x ) ,   s i z e o f ( s t r u c t   r t _ m a i l b o x ) } ,  
 # e n d i f  
 # i f d e f   R T _ U S I N G _ M E S S A G E Q U E U E  
         / *   i n i t i a l i z e   o b j e c t   c o n t a i n e r   -   m e s s a g e   q u e u e   * /  
         { R T _ O b j e c t _ C l a s s _ M e s s a g e Q u e u e ,   _ O B J _ C O N T A I N E R _ L I S T _ I N I T ( R T _ O b j e c t _ I n f o _ M e s s a g e Q u e u e ) ,   s i z e o f ( s t r u c t   r t _ m e s s a g e q u e u e ) } ,  
 # e n d i f  
 # i f d e f   R T _ U S I N G _ M E M H E A P  
         / *   i n i t i a l i z e   o b j e c t   c o n t a i n e r   -   m e m o r y   h e a p   * /  
         { R T _ O b j e c t _ C l a s s _ M e m H e a p ,   _ O B J _ C O N T A I N E R _ L I S T _ I N I T ( R T _ O b j e c t _ I n f o _ M e m H e a p ) ,   s i z e o f ( s t r u c t   r t _ m e m h e a p ) } ,  
 # e n d i f  
 # i f d e f   R T _ U S I N G _ M E M P O O L  
         / *   i n i t i a l i z e   o b j e c t   c o n t a i n e r   -   m e m o r y   p o o l   * /  
         { R T _ O b j e c t _ C l a s s _ M e m P o o l ,   _ O B J _ C O N T A I N E R _ L I S T _ I N I T ( R T _ O b j e c t _ I n f o _ M e m P o o l ) ,   s i z e o f ( s t r u c t   r t _ m e m p o o l ) } ,  
 # e n d i f  
 # i f d e f   R T _ U S I N G _ D E V I C E  
         / *   i n i t i a l i z e   o b j e c t   c o n t a i n e r   -   d e v i c e   * /  
         { R T _ O b j e c t _ C l a s s _ D e v i c e ,   _ O B J _ C O N T A I N E R _ L I S T _ I N I T ( R T _ O b j e c t _ I n f o _ D e v i c e ) ,   s i z e o f ( s t r u c t   r t _ d e v i c e ) } ,  
 # e n d i f  
         / *   i n i t i a l i z e   o b j e c t   c o n t a i n e r   -   t i m e r   * /  
         { R T _ O b j e c t _ C l a s s _ T i m e r ,   _ O B J _ C O N T A I N E R _ L I S T _ I N I T ( R T _ O b j e c t _ I n f o _ T i m e r ) ,   s i z e o f ( s t r u c t   r t _ t i m e r ) } ,  
 } ;  
  
 # i f d e f   R T _ U S I N G _ H O O K  
 s t a t i c   v o i d   ( * r t _ o b j e c t _ a t t a c h _ h o o k ) ( s t r u c t   r t _ o b j e c t   * o b j e c t ) ;  
 s t a t i c   v o i d   ( * r t _ o b j e c t _ d e t a c h _ h o o k ) ( s t r u c t   r t _ o b j e c t   * o b j e c t ) ;  
 v o i d   ( * r t _ o b j e c t _ t r y t a k e _ h o o k ) ( s t r u c t   r t _ o b j e c t   * o b j e c t ) ;  
 v o i d   ( * r t _ o b j e c t _ t a k e _ h o o k ) ( s t r u c t   r t _ o b j e c t   * o b j e c t ) ;  
 v o i d   ( * r t _ o b j e c t _ p u t _ h o o k ) ( s t r u c t   r t _ o b j e c t   * o b j e c t ) ;  
  
 / * *  
   *   @ a d d t o g r o u p   H o o k  
   * /  
  
 / * * @ { * /  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   s e t   a   h o o k   f u n c t i o n ,   w h i c h   w i l l   b e   i n v o k e d   w h e n   o b j e c t  
   *   a t t a c h e s   t o   k e r n e l   o b j e c t   s y s t e m .  
   *  
   *   @ p a r a m   h o o k   t h e   h o o k   f u n c t i o n  
   * /  
 v o i d   r t _ o b j e c t _ a t t a c h _ s e t h o o k ( v o i d   ( * h o o k ) ( s t r u c t   r t _ o b j e c t   * o b j e c t ) )  
 {  
         r t _ o b j e c t _ a t t a c h _ h o o k   =   h o o k ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   s e t   a   h o o k   f u n c t i o n ,   w h i c h   w i l l   b e   i n v o k e d   w h e n   o b j e c t  
   *   d e t a c h e s   f r o m   k e r n e l   o b j e c t   s y s t e m .  
   *  
   *   @ p a r a m   h o o k   t h e   h o o k   f u n c t i o n  
   * /  
 v o i d   r t _ o b j e c t _ d e t a c h _ s e t h o o k ( v o i d   ( * h o o k ) ( s t r u c t   r t _ o b j e c t   * o b j e c t ) )  
 {  
         r t _ o b j e c t _ d e t a c h _ h o o k   =   h o o k ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   s e t   a   h o o k   f u n c t i o n ,   w h i c h   w i l l   b e   i n v o k e d   w h e n   o b j e c t  
   *   i s   t a k e n   f r o m   k e r n e l   o b j e c t   s y s t e m .  
   *  
   *   T h e   o b j e c t   i s   t a k e n   m e a n s :  
   *   s e m a p h o r e   -   s e m a p h o r e   i s   t a k e n   b y   t h r e a d  
   *   m u t e x   -   m u t e x   i s   t a k e n   b y   t h r e a d  
   *   e v e n t   -   e v e n t   i s   r e c e i v e d   b y   t h r e a d  
   *   m a i l b o x   -   m a i l   i s   r e c e i v e d   b y   t h r e a d  
   *   m e s s a g e   q u e u e   -   m e s s a g e   i s   r e c e i v e d   b y   t h r e a d  
   *  
   *   @ p a r a m   h o o k   t h e   h o o k   f u n c t i o n  
   * /  
 v o i d   r t _ o b j e c t _ t r y t a k e _ s e t h o o k ( v o i d   ( * h o o k ) ( s t r u c t   r t _ o b j e c t   * o b j e c t ) )  
 {  
         r t _ o b j e c t _ t r y t a k e _ h o o k   =   h o o k ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   s e t   a   h o o k   f u n c t i o n ,   w h i c h   w i l l   b e   i n v o k e d   w h e n   o b j e c t  
   *   h a v e   b e e n   t a k e n   f r o m   k e r n e l   o b j e c t   s y s t e m .  
   *  
   *   T h e   o b j e c t   h a v e   b e e n   t a k e n   m e a n s :  
   *   s e m a p h o r e   -   s e m a p h o r e   h a v e   b e e n   t a k e n   b y   t h r e a d  
   *   m u t e x   -   m u t e x   h a v e   b e e n   t a k e n   b y   t h r e a d  
   *   e v e n t   -   e v e n t   h a v e   b e e n   r e c e i v e d   b y   t h r e a d  
   *   m a i l b o x   -   m a i l   h a v e   b e e n   r e c e i v e d   b y   t h r e a d  
   *   m e s s a g e   q u e u e   -   m e s s a g e   h a v e   b e e n   r e c e i v e d   b y   t h r e a d  
   *   t i m e r   -   t i m e r   i s   s t a r t e d  
   *  
   *   @ p a r a m   h o o k   t h e   h o o k   f u n c t i o n  
   * /  
 v o i d   r t _ o b j e c t _ t a k e _ s e t h o o k ( v o i d   ( * h o o k ) ( s t r u c t   r t _ o b j e c t   * o b j e c t ) )  
 {  
         r t _ o b j e c t _ t a k e _ h o o k   =   h o o k ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   s e t   a   h o o k   f u n c t i o n ,   w h i c h   w i l l   b e   i n v o k e d   w h e n   o b j e c t  
   *   i s   p u t   t o   k e r n e l   o b j e c t   s y s t e m .  
   *  
   *   @ p a r a m   h o o k   t h e   h o o k   f u n c t i o n  
   * /  
 v o i d   r t _ o b j e c t _ p u t _ s e t h o o k ( v o i d   ( * h o o k ) ( s t r u c t   r t _ o b j e c t   * o b j e c t ) )  
 {  
         r t _ o b j e c t _ p u t _ h o o k   =   h o o k ;  
 }  
  
 / * * @ } * /  
 # e n d i f  
  
 / * *  
   *   @ i n g r o u p   S y s t e m I n i t  
   *  
   *   T h i s   f u n c t i o n   w i l l   i n i t i a l i z e   s y s t e m   o b j e c t   m a n a g e m e n t .  
   *  
   *   @ d e p r e c a t e d   s i n c e   0 . 3 . 0 ,   t h i s   f u n c t i o n   d o e s   n o t   n e e d   t o   b e   i n v o k e d  
   *   i n   t h e   s y s t e m   i n i t i a l i z a t i o n .  
   * /  
 v o i d   r t _ s y s t e m _ o b j e c t _ i n i t ( v o i d )  
 {  
 }  
  
 / * *  
   *   @ a d d t o g r o u p   K e r n e l O b j e c t  
   * /  
  
 / * * @ { * /  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   r e t u r n   t h e   s p e c i f i e d   t y p e   o f   o b j e c t   i n f o r m a t i o n .  
   *  
   *   @ p a r a m   t y p e   t h e   t y p e   o f   o b j e c t ,   w h i c h   c a n   b e  
   *                           R T _ O b j e c t _ C l a s s _ T h r e a d / S e m a p h o r e / M u t e x . . .   e t c  
   *  
   *   @ r e t u r n   t h e   o b j e c t   t y p e   i n f o r m a t i o n   o r   R T _ N U L L  
   * /  
 s t r u c t   r t _ o b j e c t _ i n f o r m a t i o n   *  
 r t _ o b j e c t _ g e t _ i n f o r m a t i o n ( e n u m   r t _ o b j e c t _ c l a s s _ t y p e   t y p e )  
 {  
         i n t   i n d e x ;  
  
         f o r   ( i n d e x   =   0 ;   i n d e x   <   R T _ O b j e c t _ I n f o _ U n k n o w n ;   i n d e x   + + )  
                 i f   ( r t _ o b j e c t _ c o n t a i n e r [ i n d e x ] . t y p e   = =   t y p e )   r e t u r n   & r t _ o b j e c t _ c o n t a i n e r [ i n d e x ] ;  
  
         r e t u r n   R T _ N U L L ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   r e t u r n   t h e   l e n g t h   o f   o b j e c t   l i s t   i n   o b j e c t   c o n t a i n e r .  
   *  
   *   @ p a r a m   t y p e   t h e   t y p e   o f   o b j e c t ,   w h i c h   c a n   b e  
   *                           R T _ O b j e c t _ C l a s s _ T h r e a d / S e m a p h o r e / M u t e x . . .   e t c  
   *   @ r e t u r n   t h e   l e n g t h   o f   o b j e c t   l i s t  
   * /  
 i n t   r t _ o b j e c t _ g e t _ l e n g t h ( e n u m   r t _ o b j e c t _ c l a s s _ t y p e   t y p e )  
 {  
         i n t   c o u n t   =   0 ;  
         r t _ u b a s e _ t   l e v e l ;  
         s t r u c t   r t _ l i s t _ n o d e   * n o d e   =   R T _ N U L L ;  
         s t r u c t   r t _ o b j e c t _ i n f o r m a t i o n   * i n f o r m a t i o n   =   R T _ N U L L ;  
  
         i n f o r m a t i o n   =   r t _ o b j e c t _ g e t _ i n f o r m a t i o n ( ( e n u m   r t _ o b j e c t _ c l a s s _ t y p e ) t y p e ) ;  
         i f   ( i n f o r m a t i o n   = =   R T _ N U L L )   r e t u r n   0 ;  
  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
         / *   g e t   t h e   c o u n t   o f   o b j e c t s   * /  
         r t _ l i s t _ f o r _ e a c h ( n o d e ,   & ( i n f o r m a t i o n - > o b j e c t _ l i s t ) )  
         {  
                 c o u n t   + + ;  
         }  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
         r e t u r n   c o u n t ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   c o p y   t h e   o b j e c t   p o i n t e r   o f   t h e   s p e c i f i e d   t y p e ,  
   *   w i t h   t h e   m a x i m u m   s i z e   s p e c i f i e d   b y   m a x l e n .  
   *  
   *   @ p a r a m   t y p e   t h e   t y p e   o f   o b j e c t ,   w h i c h   c a n   b e  
   *                           R T _ O b j e c t _ C l a s s _ T h r e a d / S e m a p h o r e / M u t e x . . .   e t c  
   *   @ p a r a m   p o i n t e r s   t h e   p o i n t e r s   w i l l   b e   s a v e d   t o  
   *   @ p a r a m   m a x l e n   t h e   m a x i m u m   n u m b e r   o f   p o i n t e r s   c a n   b e   s a v e d  
   *  
   *   @ r e t u r n   t h e   c o p i e d   n u m b e r   o f   o b j e c t   p o i n t e r s  
   * /  
 i n t   r t _ o b j e c t _ g e t _ p o i n t e r s ( e n u m   r t _ o b j e c t _ c l a s s _ t y p e   t y p e ,   r t _ o b j e c t _ t   * p o i n t e r s ,   i n t   m a x l e n )  
 {  
         i n t   i n d e x   =   0 ;  
         r t _ u b a s e _ t   l e v e l ;  
  
         s t r u c t   r t _ o b j e c t   * o b j e c t ;  
         s t r u c t   r t _ l i s t _ n o d e   * n o d e   =   R T _ N U L L ;  
         s t r u c t   r t _ o b j e c t _ i n f o r m a t i o n   * i n f o r m a t i o n   =   R T _ N U L L ;  
  
         i f   ( m a x l e n   < =   0 )   r e t u r n   0 ;  
  
         i n f o r m a t i o n   =   r t _ o b j e c t _ g e t _ i n f o r m a t i o n ( ( e n u m   r t _ o b j e c t _ c l a s s _ t y p e ) t y p e ) ;  
         i f   ( i n f o r m a t i o n   = =   R T _ N U L L )   r e t u r n   0 ;  
  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
         / *   r e t r i e v e   p o i n t e r   o f   o b j e c t   * /  
         r t _ l i s t _ f o r _ e a c h ( n o d e ,   & ( i n f o r m a t i o n - > o b j e c t _ l i s t ) )  
         {  
                 o b j e c t   =   r t _ l i s t _ e n t r y ( n o d e ,   s t r u c t   r t _ o b j e c t ,   l i s t ) ;  
  
                 p o i n t e r s [ i n d e x ]   =   o b j e c t ;  
                 i n d e x   + + ;  
  
                 i f   ( i n d e x   > =   m a x l e n )   b r e a k ;  
         }  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
         r e t u r n   i n d e x ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   i n i t i a l i z e   a n   o b j e c t   a n d   a d d   i t   t o   o b j e c t   s y s t e m  
   *   m a n a g e m e n t .  
   *  
   *   @ p a r a m   o b j e c t   t h e   s p e c i f i e d   o b j e c t   t o   b e   i n i t i a l i z e d .  
   *   @ p a r a m   t y p e   t h e   o b j e c t   t y p e .  
   *   @ p a r a m   n a m e   t h e   o b j e c t   n a m e .   I n   s y s t e m ,   t h e   o b j e c t ' s   n a m e   m u s t   b e   u n i q u e .  
   * /  
 v o i d   r t _ o b j e c t _ i n i t ( s t r u c t   r t _ o b j e c t                   * o b j e c t ,  
                                         e n u m   r t _ o b j e c t _ c l a s s _ t y p e   t y p e ,  
                                         c o n s t   c h a r                               * n a m e )  
 {  
         r e g i s t e r   r t _ b a s e _ t   t e m p ;  
         s t r u c t   r t _ l i s t _ n o d e   * n o d e   =   R T _ N U L L ;  
         s t r u c t   r t _ o b j e c t _ i n f o r m a t i o n   * i n f o r m a t i o n ;  
  
         / *   g e t   o b j e c t   i n f o r m a t i o n   * /  
         i n f o r m a t i o n   =   r t _ o b j e c t _ g e t _ i n f o r m a t i o n ( t y p e ) ;  
         R T _ A S S E R T ( i n f o r m a t i o n   ! =   R T _ N U L L ) ;  
  
         / *   c h e c k   o b j e c t   t y p e   t o   a v o i d   r e - i n i t i a l i z a t i o n   * /  
  
         / *   e n t e r   c r i t i c a l   * /  
         r t _ e n t e r _ c r i t i c a l ( ) ;  
         / *   t r y   t o   f i n d   o b j e c t   * /  
         f o r   ( n o d e     =   i n f o r m a t i o n - > o b j e c t _ l i s t . n e x t ;  
                         n o d e   ! =   & ( i n f o r m a t i o n - > o b j e c t _ l i s t ) ;  
                         n o d e     =   n o d e - > n e x t )  
         {  
                 s t r u c t   r t _ o b j e c t   * o b j ;  
  
                 o b j   =   r t _ l i s t _ e n t r y ( n o d e ,   s t r u c t   r t _ o b j e c t ,   l i s t ) ;  
                 i f   ( o b j )   / *   s k i p   w a r n i n g   w h e n   d i s a b l e   d e b u g   * /  
                 {  
                         R T _ A S S E R T ( o b j   ! =   o b j e c t ) ;  
                 }  
         }  
         / *   l e a v e   c r i t i c a l   * /  
         r t _ e x i t _ c r i t i c a l ( ) ;  
  
         / *   i n i t i a l i z e   o b j e c t ' s   p a r a m e t e r s   * /  
         / *   s e t   o b j e c t   t y p e   t o   s t a t i c   * /  
         o b j e c t - > t y p e   =   t y p e   |   R T _ O b j e c t _ C l a s s _ S t a t i c ;  
         / *   c o p y   n a m e   * /  
         r t _ s t r n c p y ( o b j e c t - > n a m e ,   n a m e ,   R T _ N A M E _ M A X ) ;  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ o b j e c t _ a t t a c h _ h o o k ,   ( o b j e c t ) ) ;  
  
         / *   l o c k   i n t e r r u p t   * /  
         t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         / *   i n s e r t   o b j e c t   i n t o   i n f o r m a t i o n   o b j e c t   l i s t   * /  
         r t _ l i s t _ i n s e r t _ a f t e r ( & ( i n f o r m a t i o n - > o b j e c t _ l i s t ) ,   & ( o b j e c t - > l i s t ) ) ;  
  
         / *   u n l o c k   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   d e t a c h   a   s t a t i c   o b j e c t   f r o m   o b j e c t   s y s t e m ,  
   *   a n d   t h e   m e m o r y   o f   s t a t i c   o b j e c t   i s   n o t   f r e e d .  
   *  
   *   @ p a r a m   o b j e c t   t h e   s p e c i f i e d   o b j e c t   t o   b e   d e t a c h e d .  
   * /  
 v o i d   r t _ o b j e c t _ d e t a c h ( r t _ o b j e c t _ t   o b j e c t )  
 {  
         r e g i s t e r   r t _ b a s e _ t   t e m p ;  
  
         / *   o b j e c t   c h e c k   * /  
         R T _ A S S E R T ( o b j e c t   ! =   R T _ N U L L ) ;  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ o b j e c t _ d e t a c h _ h o o k ,   ( o b j e c t ) ) ;  
  
         / *   r e s e t   o b j e c t   t y p e   * /  
         o b j e c t - > t y p e   =   0 ;  
  
         / *   l o c k   i n t e r r u p t   * /  
         t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         / *   r e m o v e   f r o m   o l d   l i s t   * /  
         r t _ l i s t _ r e m o v e ( & ( o b j e c t - > l i s t ) ) ;  
  
         / *   u n l o c k   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
 }  
  
 # i f d e f   R T _ U S I N G _ H E A P  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   a l l o c a t e   a n   o b j e c t   f r o m   o b j e c t   s y s t e m  
   *  
   *   @ p a r a m   t y p e   t h e   t y p e   o f   o b j e c t  
   *   @ p a r a m   n a m e   t h e   o b j e c t   n a m e .   I n   s y s t e m ,   t h e   o b j e c t ' s   n a m e   m u s t   b e   u n i q u e .  
   *  
   *   @ r e t u r n   o b j e c t  
   * /  
 r t _ o b j e c t _ t   r t _ o b j e c t _ a l l o c a t e ( e n u m   r t _ o b j e c t _ c l a s s _ t y p e   t y p e ,   c o n s t   c h a r   * n a m e )  
 {  
         s t r u c t   r t _ o b j e c t   * o b j e c t ;  
         r e g i s t e r   r t _ b a s e _ t   t e m p ;  
         s t r u c t   r t _ o b j e c t _ i n f o r m a t i o n   * i n f o r m a t i o n ;  
  
         R T _ D E B U G _ N O T _ I N _ I N T E R R U P T ;  
  
         / *   g e t   o b j e c t   i n f o r m a t i o n   * /  
         i n f o r m a t i o n   =   r t _ o b j e c t _ g e t _ i n f o r m a t i o n ( t y p e ) ;  
         R T _ A S S E R T ( i n f o r m a t i o n   ! =   R T _ N U L L ) ;  
  
         o b j e c t   =   ( s t r u c t   r t _ o b j e c t   * ) R T _ K E R N E L _ M A L L O C ( i n f o r m a t i o n - > o b j e c t _ s i z e ) ;  
         i f   ( o b j e c t   = =   R T _ N U L L )  
         {  
                 / *   n o   m e m o r y   c a n   b e   a l l o c a t e d   * /  
                 r e t u r n   R T _ N U L L ;  
         }  
  
         / *   c l e a n   m e m o r y   d a t a   o f   o b j e c t   * /  
         r t _ m e m s e t ( o b j e c t ,   0 x 0 ,   i n f o r m a t i o n - > o b j e c t _ s i z e ) ;  
  
         / *   i n i t i a l i z e   o b j e c t ' s   p a r a m e t e r s   * /  
  
         / *   s e t   o b j e c t   t y p e   * /  
         o b j e c t - > t y p e   =   t y p e ;  
  
         / *   s e t   o b j e c t   f l a g   * /  
         o b j e c t - > f l a g   =   0 ;  
  
         / *   c o p y   n a m e   * /  
         r t _ s t r n c p y ( o b j e c t - > n a m e ,   n a m e ,   R T _ N A M E _ M A X ) ;  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ o b j e c t _ a t t a c h _ h o o k ,   ( o b j e c t ) ) ;  
  
         / *   l o c k   i n t e r r u p t   * /  
         t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         / *   i n s e r t   o b j e c t   i n t o   i n f o r m a t i o n   o b j e c t   l i s t   * /  
         r t _ l i s t _ i n s e r t _ a f t e r ( & ( i n f o r m a t i o n - > o b j e c t _ l i s t ) ,   & ( o b j e c t - > l i s t ) ) ;  
  
         / *   u n l o c k   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
         / *   r e t u r n   o b j e c t   * /  
         r e t u r n   o b j e c t ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   d e l e t e   a n   o b j e c t   a n d   r e l e a s e   o b j e c t   m e m o r y .  
   *  
   *   @ p a r a m   o b j e c t   t h e   s p e c i f i e d   o b j e c t   t o   b e   d e l e t e d .  
   * /  
 v o i d   r t _ o b j e c t _ d e l e t e ( r t _ o b j e c t _ t   o b j e c t )  
 {  
         r e g i s t e r   r t _ b a s e _ t   t e m p ;  
  
         / *   o b j e c t   c h e c k   * /  
         R T _ A S S E R T ( o b j e c t   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( ! ( o b j e c t - > t y p e   &   R T _ O b j e c t _ C l a s s _ S t a t i c ) ) ;  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ o b j e c t _ d e t a c h _ h o o k ,   ( o b j e c t ) ) ;  
  
         / *   r e s e t   o b j e c t   t y p e   * /  
         o b j e c t - > t y p e   =   R T _ O b j e c t _ C l a s s _ N u l l ;  
  
         / *   l o c k   i n t e r r u p t   * /  
         t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         / *   r e m o v e   f r o m   o l d   l i s t   * /  
         r t _ l i s t _ r e m o v e ( & ( o b j e c t - > l i s t ) ) ;  
  
         / *   u n l o c k   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
         / *   f r e e   t h e   m e m o r y   o f   o b j e c t   * /  
         R T _ K E R N E L _ F R E E ( o b j e c t ) ;  
 }  
 # e n d i f  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   j u d g e   t h e   o b j e c t   i s   s y s t e m   o b j e c t   o r   n o t .  
   *   N o r m a l l y ,   t h e   s y s t e m   o b j e c t   i s   a   s t a t i c   o b j e c t   a n d   t h e   t y p e  
   *   o f   o b j e c t   s e t   t o   R T _ O b j e c t _ C l a s s _ S t a t i c .  
   *  
   *   @ p a r a m   o b j e c t   t h e   s p e c i f i e d   o b j e c t   t o   b e   j u d g e d .  
   *  
   *   @ r e t u r n   R T _ T R U E   i f   a   s y s t e m   o b j e c t ,   R T _ F A L S E   f o r   o t h e r s .  
   * /  
 r t _ b o o l _ t   r t _ o b j e c t _ i s _ s y s t e m o b j e c t ( r t _ o b j e c t _ t   o b j e c t )  
 {  
         / *   o b j e c t   c h e c k   * /  
         R T _ A S S E R T ( o b j e c t   ! =   R T _ N U L L ) ;  
  
         i f   ( o b j e c t - > t y p e   &   R T _ O b j e c t _ C l a s s _ S t a t i c )  
                 r e t u r n   R T _ T R U E ;  
  
         r e t u r n   R T _ F A L S E ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   r e t u r n   t h e   t y p e   o f   o b j e c t   w i t h o u t  
   *   R T _ O b j e c t _ C l a s s _ S t a t i c   f l a g .  
   *  
   *   @ p a r a m   o b j e c t   t h e   s p e c i f i e d   o b j e c t   t o   b e   g e t   t y p e .  
   *  
   *   @ r e t u r n   t h e   t y p e   o f   o b j e c t .  
   * /  
 r t _ u i n t 8 _ t   r t _ o b j e c t _ g e t _ t y p e ( r t _ o b j e c t _ t   o b j e c t )  
 {  
         / *   o b j e c t   c h e c k   * /  
         R T _ A S S E R T ( o b j e c t   ! =   R T _ N U L L ) ;  
  
         r e t u r n   o b j e c t - > t y p e   &   ~ R T _ O b j e c t _ C l a s s _ S t a t i c ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   f i n d   s p e c i f i e d   n a m e   o b j e c t   f r o m   o b j e c t  
   *   c o n t a i n e r .  
   *  
   *   @ p a r a m   n a m e   t h e   s p e c i f i e d   n a m e   o f   o b j e c t .  
   *   @ p a r a m   t y p e   t h e   t y p e   o f   o b j e c t  
   *  
   *   @ r e t u r n   t h e   f o u n d   o b j e c t   o r   R T _ N U L L   i f   t h e r e   i s   n o   t h i s   o b j e c t  
   *   i n   o b j e c t   c o n t a i n e r .  
   *  
   *   @ n o t e   t h i s   f u n c t i o n   s h a l l   n o t   b e   i n v o k e d   i n   i n t e r r u p t   s t a t u s .  
   * /  
 r t _ o b j e c t _ t   r t _ o b j e c t _ f i n d ( c o n s t   c h a r   * n a m e ,   r t _ u i n t 8 _ t   t y p e )  
 {  
         s t r u c t   r t _ o b j e c t   * o b j e c t   =   R T _ N U L L ;  
         s t r u c t   r t _ l i s t _ n o d e   * n o d e   =   R T _ N U L L ;  
         s t r u c t   r t _ o b j e c t _ i n f o r m a t i o n   * i n f o r m a t i o n   =   R T _ N U L L ;  
  
         i n f o r m a t i o n   =   r t _ o b j e c t _ g e t _ i n f o r m a t i o n ( ( e n u m   r t _ o b j e c t _ c l a s s _ t y p e ) t y p e ) ;  
  
         / *   p a r a m e t e r   c h e c k   * /  
         i f   ( ( n a m e   = =   R T _ N U L L )   | |   ( i n f o r m a t i o n   = =   R T _ N U L L ) )   r e t u r n   R T _ N U L L ;  
  
         / *   w h i c h   i s   i n v o k e   i n   i n t e r r u p t   s t a t u s   * /  
         R T _ D E B U G _ N O T _ I N _ I N T E R R U P T ;  
  
         / *   e n t e r   c r i t i c a l   * /  
         r t _ e n t e r _ c r i t i c a l ( ) ;  
  
         / *   t r y   t o   f i n d   o b j e c t   * /  
         r t _ l i s t _ f o r _ e a c h ( n o d e ,   & ( i n f o r m a t i o n - > o b j e c t _ l i s t ) )  
         {  
                 o b j e c t   =   r t _ l i s t _ e n t r y ( n o d e ,   s t r u c t   r t _ o b j e c t ,   l i s t ) ;  
                 i f   ( r t _ s t r n c m p ( o b j e c t - > n a m e ,   n a m e ,   R T _ N A M E _ M A X )   = =   0 )  
                 {  
                         / *   l e a v e   c r i t i c a l   * /  
                         r t _ e x i t _ c r i t i c a l ( ) ;  
  
                         r e t u r n   o b j e c t ;  
                 }  
         }  
  
         / *   l e a v e   c r i t i c a l   * /  
         r t _ e x i t _ c r i t i c a l ( ) ;  
  
         r e t u r n   R T _ N U L L ;  
 }  
  
 / * * @ } * /  