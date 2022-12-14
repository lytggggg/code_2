??/ *  
   *   C o p y r i g h t   ( c )   2 0 0 6 - 2 0 2 1 ,   R T - T h r e a d   D e v e l o p m e n t   T e a m  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   C h a n g e   L o g s :  
   *   D a t e                       A u t h o r               N o t e s  
   *   2 0 1 1 - 0 6 - 0 2           B e r n a r d             A d d   f i n s h _ g e t _ p r o m p t   f u n c t i o n   d e c l a r a t i o n  
   * /  
  
 # i f n d e f   _ _ S H E L L _ H _ _  
 # d e f i n e   _ _ S H E L L _ H _ _  
  
 # i n c l u d e   < r t t h r e a d . h >  
 # i n c l u d e   " f i n s h . h "  
  
 # i f n d e f   F I N S H _ T H R E A D _ P R I O R I T Y  
 # d e f i n e   F I N S H _ T H R E A D _ P R I O R I T Y   2 0  
 # e n d i f  
 # i f n d e f   F I N S H _ T H R E A D _ S T A C K _ S I Z E  
 # d e f i n e   F I N S H _ T H R E A D _ S T A C K _ S I Z E   2 0 4 8  
 # e n d i f  
 # i f n d e f   F I N S H _ C M D _ S I Z E  
 # d e f i n e   F I N S H _ C M D _ S I Z E             8 0  
 # e n d i f  
  
 # d e f i n e   F I N S H _ O P T I O N _ E C H O       0 x 0 1  
  
 # d e f i n e   F I N S H _ P R O M P T                 f i n s h _ g e t _ p r o m p t ( )  
 c o n s t   c h a r *   f i n s h _ g e t _ p r o m p t ( v o i d ) ;  
 i n t   f i n s h _ s e t _ p r o m p t ( c o n s t   c h a r   *   p r o m p t ) ;  
  
 # i f d e f   F I N S H _ U S I N G _ H I S T O R Y  
         # i f n d e f   F I N S H _ H I S T O R Y _ L I N E S  
                 # d e f i n e   F I N S H _ H I S T O R Y _ L I N E S   5  
         # e n d i f  
 # e n d i f  
  
 # i f d e f   F I N S H _ U S I N G _ A U T H  
         # i f n d e f   F I N S H _ P A S S W O R D _ M A X  
                 # d e f i n e   F I N S H _ P A S S W O R D _ M A X   R T _ N A M E _ M A X  
         # e n d i f  
         # i f n d e f   F I N S H _ P A S S W O R D _ M I N  
                 # d e f i n e   F I N S H _ P A S S W O R D _ M I N   6  
         # e n d i f  
         # i f n d e f   F I N S H _ D E F A U L T _ P A S S W O R D  
                 # d e f i n e   F I N S H _ D E F A U L T _ P A S S W O R D   " r t t h r e a d "  
         # e n d i f  
 # e n d i f   / *   F I N S H _ U S I N G _ A U T H   * /  
  
 # i f n d e f   F I N S H _ T H R E A D _ N A M E  
 # d e f i n e   F I N S H _ T H R E A D _ N A M E       " t s h e l l "  
 # e n d i f  
  
 e n u m   i n p u t _ s t a t  
 {  
         W A I T _ N O R M A L ,  
         W A I T _ S P E C _ K E Y ,  
         W A I T _ F U N C _ K E Y ,  
 } ;  
 s t r u c t   f i n s h _ s h e l l  
 {  
         s t r u c t   r t _ s e m a p h o r e   r x _ s e m ;  
  
         e n u m   i n p u t _ s t a t   s t a t ;  
  
         r t _ u i n t 8 _ t   e c h o _ m o d e : 1 ;  
         r t _ u i n t 8 _ t   p r o m p t _ m o d e :   1 ;  
  
 # i f d e f   F I N S H _ U S I N G _ H I S T O R Y  
         r t _ u i n t 1 6 _ t   c u r r e n t _ h i s t o r y ;  
         r t _ u i n t 1 6 _ t   h i s t o r y _ c o u n t ;  
  
         c h a r   c m d _ h i s t o r y [ F I N S H _ H I S T O R Y _ L I N E S ] [ F I N S H _ C M D _ S I Z E ] ;  
 # e n d i f  
  
 # i f n d e f   F I N S H _ U S I N G _ M S H _ O N L Y  
         s t r u c t   f i n s h _ p a r s e r   p a r s e r ;  
 # e n d i f  
  
         c h a r   l i n e [ F I N S H _ C M D _ S I Z E ] ;  
         r t _ u i n t 1 6 _ t   l i n e _ p o s i t i o n ;  
         r t _ u i n t 1 6 _ t   l i n e _ c u r p o s ;  
  
 # i f   ! d e f i n e d ( R T _ U S I N G _ P O S I X )   & &   d e f i n e d ( R T _ U S I N G _ D E V I C E )  
         r t _ d e v i c e _ t   d e v i c e ;  
 # e n d i f  
  
 # i f d e f   F I N S H _ U S I N G _ A U T H  
         c h a r   p a s s w o r d [ F I N S H _ P A S S W O R D _ M A X ] ;  
 # e n d i f  
 } ;  
  
 v o i d   f i n s h _ s e t _ e c h o ( r t _ u i n t 3 2 _ t   e c h o ) ;  
 r t _ u i n t 3 2 _ t   f i n s h _ g e t _ e c h o ( v o i d ) ;  
  
 i n t   f i n s h _ s y s t e m _ i n i t ( v o i d ) ;  
 v o i d   f i n s h _ s e t _ d e v i c e ( c o n s t   c h a r *   d e v i c e _ n a m e ) ;  
 c o n s t   c h a r *   f i n s h _ g e t _ d e v i c e ( v o i d ) ;  
  
 r t _ u i n t 3 2 _ t   f i n s h _ g e t _ p r o m p t _ m o d e ( v o i d ) ;  
 v o i d   f i n s h _ s e t _ p r o m p t _ m o d e ( r t _ u i n t 3 2 _ t   p r o m p t _ m o d e ) ;  
  
 # i f d e f   F I N S H _ U S I N G _ A U T H  
 r t _ e r r _ t   f i n s h _ s e t _ p a s s w o r d ( c o n s t   c h a r   * p a s s w o r d ) ;  
 c o n s t   c h a r   * f i n s h _ g e t _ p a s s w o r d ( v o i d ) ;  
 # e n d i f  
  
 # e n d i f  
  